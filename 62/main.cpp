#include <iostream>
#include <vector>

using namespace std;

class Solution {
    /**
     * param A : an integer ratated sorted array
     * param target :  an integer to be searched
     * return : an integer
     */
public:
    int search(vector<int> &A, int target) {

        int l = 0, r = A.size() - 1;

        if (A.size() == 0)
            return -1;

        int m;

        while(l < r - 1){

            m = (l + r) / 2;

            if (target == A[m])
                return m;

            if(A[l] < A[r]){
                if (target < A[m] && target < A[l])
                    l = m+1;
                else{
                    r = m-1;
                }

            }

            else{
                if(target > A[m] && target > A[l])
                    r = m-1;
                else
                    l = m+1;

            }

        }

        // cout << l << " " << r  << " " << m << endl;

    if (target == A[r]){
        return r;
    }

    else if (target == A[l]) return l;


    else return -1;

}
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}