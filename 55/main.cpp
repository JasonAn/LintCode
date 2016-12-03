#include <iostream>

using namespace std;


class Solution {
public:
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true
     *           else return false
     */
    bool compareStrings(string A, string B) {

        int A_ar[26] = {};
        int B_ar[26] = {};


        for(int i = 0; i < A.size(); i++){

            int m = int(A[i]-'A');
            A_ar[m]++;

        }

        for(int i = 0; i < B.size(); i++){

            int n = int(B[i]-'A');
            B_ar[n]++;
        }

        for(int i = 0; i < 26; i++)
            if (A_ar[i] < B_ar[i]){
                cout << A_ar[i] << " " << B_ar[i] << endl;
                return false;
                }

        return true;

        // write your code here
    }
};

int main() {

    string a = "A";
    string b = "";

    Solution s;
    cout << s.compareStrings(a, b);

    return 0;
}