#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @paramn n: An integer
     * @return: An integer
     */
    int numTrees(int n){
        vector<int> numBST(n+1, 0);

        numBST[0] = 1;

        int i = 1, j;

        while(i < n+1){

            for(j = 0; j < i; j++)
                numBST[i] += numBST[j]*numBST[i-1-j];

            i++;
        }

        return numBST[n];
    }

};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}