#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    /**
     *@param A: A list of integers
     *@param elem: An integer
     *@return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {

        for (int i = 0; i < A.size(); i++){
            if (A[i] == elem) {
                A.erase(A.begin() + i);
                i--;
            }

            for (int i = 0; i < A.size(); i++)
                cout << A[i];
            cout << endl;
        }

        return A.size();
    }
};

int main() {

    vector<int> a = {0,4,4,0,4,4,4,0,2};

    Solution ans;

    cout << ans.removeElement(a, 4);

    return 0;
}