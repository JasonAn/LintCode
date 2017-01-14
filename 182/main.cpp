#include <iostream>

using namespace std;


class Solution {
public:
    /**
     *@param A: A positive integer which has N digits, A is a string.
     *@param k: Remove k digits.
     *@return: A string
     */
    string DeleteDigits(string A, int k) {

        int i = 0;
        while(k > 0 && i <= A.size()-2){
                if (A[i] > A[i+1]){
                    A.erase(A.begin() + i);
                    i -= 2;
                    if (i < 0)
                        i = 0;
                    k--;
//                     cout << A << endl;
                }
                else
                    i++;
            }

        while(k > 0){
            A.erase(A.end()-1);
            k--;
        }

//        cout << A.at(0);
        while(A.at(0) == '0')
            A.erase(A.begin());

        return A;
    }
};


int main() {
    Solution a;

    string A = "900124";

    cout<< a.DeleteDigits(A, 2);

    return 0;
}