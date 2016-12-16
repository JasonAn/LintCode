#include <iostream>
#include <vector>

using namespace std;

class Solution {
    /**
     * param A : an integer sorted array
     * param target :  an integer to be inserted
     * return : an integer
     */
public:
    int searchInsert(vector<int> &A, int target) {

        if (A.size() == 0)
            return 0;

        if (A[0] >= target)
            return 0;
        if (A[A.size()-1] < target)
            return A.size();

        int i = 0;
        int j = A.size()-1;
        int m;

        while(!(i == m && j - m == 1) ||(i == j)){
            cout << i << " " << j << endl;
            m = (i + j)/2;
            if (A[m] == target || (A[m] > target && A[m-1] < target))
                return m;
            else if(A[m] < target)
                i = m;
            else
                j = m;
        }

        if (A[i] >= target)
            return i;
        else
            return i+1;
    }
};

int main() {

    vector<int> a = {1,10,1001,201,1001,10001,10007};

    Solution ans;
    cout << ans.searchInsert(a, 10008);
    return 0;
}