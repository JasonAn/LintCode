#include <iostream>
#include <vector>

using namespace std;

class Solution{

public:

    int longestCommonSubstring(string &A, string &B) {

        int sz_A = A.size();
        int sz_B = B.size();

        int ret = 0;

        vector<vector<int>> table((sz_A), vector<int>(sz_B));


        for (int i = 0; i < sz_A; i++)
            for (int j = 0; j < sz_B; j++) {
                if (A[i] == B[j]) {
                    if (i == 0 || j == 0)
                        table[i][j] = 1;
                    else {
//                        cout << i << " " << j << endl;
                        table[i][j] = table[i - 1][j - 1] + 1;
                    }
                } else {
                    table[i][j] = 0;
                }

                ret = max(ret, table[i][j]);
            }

//        for (int i = 0; i < sz_A; i++){
//            for (int j = 0; j < sz_B; j++) {
//                cout << table[i][j] << " ";
//            }
//            cout << endl;
//        }

        return ret;

    }

};

int main() {
    string A = "";
    string B = "";

    Solution a;
    cout << a.longestCommonSubstring(A, B);

    return 0;
}