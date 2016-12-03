#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution{
public:

    vector<string> anagrams(vector<string> &strs){
        vector<map<char, int>> mapping;
        int *strs_ret = new int[strs.size()]();
        vector<string> ans;

        for (int i = 0; i < strs.size(); i++) {
            map<char, int> strmap;
            for (int j = 0; j < strs[i].size(); j++) {
                char temp = strs[i][j];
                strmap[temp]++;
            }
            mapping.push_back(strmap);
        }


        for (auto i = 1; i < mapping.size(); i++) {
            for (auto j = 0; j < i; j++) {
                if (strs_ret[i] != 1 || strs_ret[j] != 1) {

                    auto s = mapping[i].begin();


                    for (; s != mapping[i].end(); s++) {
                        if (mapping[j][s->first] != s->second)
                            break;
                    }

                    if (strs[i].size() == strs[j].size() && s == mapping[i].end()) {
                        strs_ret[i] = 1;
                        strs_ret[j] = 1;
                    }
                }
            }
        }

        for (auto i = 0; i < mapping.size(); i++)
            if (strs_ret[i] == 1)
                ans.push_back(strs[i]);

        return ans;
    }

};

int main() {

    map<char, int> mapping;

    vector<string> strs;
    strs.push_back("");
    strs.push_back("b");
    strs.push_back("");

    Solution a;

    auto s = a.anagrams(strs);

    for (int i = 0; i < s.size(); i++)
        cout << i <<" " << s[i]<< " ";

    return 0;
}