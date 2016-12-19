#include <iostream>

class Solution {
public:
    /**
     * @param A: An integers array.
     * @return: return any of peek positions.
     */
    int findPeak(vector<int> A) {
        int l = 0;
        int r = A.size()-1;

        int mid = 1;

        while(mid > 0 && mid < A.size() - 1){

            // cout << l << " " << r << endl;

            mid = (l + r) / 2;

            if (A[mid] > A[mid-1] && A[mid] > A[mid+1])
            {
                // cout << "success" << endl;
                return mid;
            }
            else if (A[mid] < A[mid-1])
                r = mid;
            else
                l = mid;

        }


    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}