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

        int i= 0, j = 0;

        while (i < m + n && j < n){

            if (A[i] == NULL) {
                while(i < m + n) {
                    A[i] = B[j];
                    i++;
                    j++;
                }
            }

            else if(B[j] == NULL) {
                j++;
            }
            else{

                int k = i;

                if(A[k] <= B[j]){
                    i++;
                }

                else{
                    if (j < n-1 && A[k] > B[j+1])
                    {
                        swap(A[k], B[j]);
                        swap(B[j], B[j+1]);
                    }
                    else {
                        swap(A[k], B[j]);
                    }
                    i++;
                }

            }

            for (int i = 0; i < m + n; i++)
                cout << A[i] << " ";
//
//            for(int i = 0; i < n; i++)
//                cout << B[i] << " ";
//
            cout << endl;

        }

    }

};

int main() {

    int A[] = {9,10,11,12,13};
    int B[] = {4,5,6,7};


    Solution ans;

    ans.mergeSortedArray(A, 5, B, 4);

    return 0;
}