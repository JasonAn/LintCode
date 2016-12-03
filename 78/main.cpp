#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param strs: A list of strings
     * @return: The longest common prefix
     */
    string longestCommonPrefix(vector<string> &strs) {
        string ret;

        if (strs.size() == 0)
            return ret;

        if (strs.size() == 1)
            return strs[0];

        size_t sz = strs.size();

        for (int i = 0; i < strs[0].size(); i++){

            int j = 1;

            while (j < sz && i < strs[j].size() && strs[0][i] == strs[j][i]){
                j++;
            }

            if (j == sz){
                ret += strs[0][i];
            }

            else
                return ret;
        }

        return ret;

    }
};

int main() {
    vector<string> ss;

    ss.push_back("A");
    ss.push_back("A");
//    ss.push_back("ACEF");

    Solution a;

    cout << a.longestCommonPrefix(ss);

    return 0;
}