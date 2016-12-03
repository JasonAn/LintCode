#include <iostream>
#include <cmath>

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

            if (A[i] == NULL){

                int k = i;

                while(A[k] == NULL)
                    k++;

                if(k == m + n && j < n){
                    while(i < m + n) {
                        A[i] = B[j];
                        i++;
                        j++;
                    }

                }


                if(A[k] <= B[j]){
                    A[i] = A[k];
                    A[k] = NULL;
                    i++;
                }

                else{
                    A[i] = B[j];
                    i++;
                    j++;
                }

            }

            else if (A[i] <= B[j]){
                i++;
            }

            else {

                swap(A[i], B[j]);
                i++;

            }

            for (int i = 0; i < m + n; i++)
                cout << A[i] << " ";
            cout << endl;

        }

    }

};

int main() {

    int A[] = {1, 3, 4, 6, NULL, NULL};
    int B[] = {2, 5};


    Solution ans;

    ans.mergeSortedArray(A, 4, B, 2);

    return 0;
}