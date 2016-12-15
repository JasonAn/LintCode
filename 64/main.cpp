#include <iostream>
#include <math.h>

using namespace std;

class Solution {
public:
    /**
     * @param A: sorted integer array A which has m elements,
     *           but size of A is m+n
     * @param B: sorted integer array B which has n elements
     * @return: void
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {

        int i = m-1, j = n-1, k = m + n - 1;

        while(i >=0 && j >= 0) {
            if (A[i] > B[j])
                A[k--] = A[i--];
            else
                A[k--] = B[j--];
        }

        while(j >=0)
            A[k--] = B[j--];
    }
};

int main() {

    int A[9] = {9,10,11,12,13};
    int B[] = {4,5,6,7};


    Solution ans;

    ans.mergeSortedArray(A, 5, B, 4);

    for (int i = 0; i < 9; i++)
        cout << A[i] << " ";

    return 0;
}