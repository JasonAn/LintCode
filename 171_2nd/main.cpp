#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution{

public:

    vector<string> anagrams(vector<string> &strs){
        map<string, int> mp;
        vector<string> ret;

        for (int i = 0; i < strs.size(); i++) {
            string ss = strs[i];
            sort(ss.begin(), ss.end());

            if(mp.find(ss)!= mp.end()) {
                ret.push_back(strs[i]);

                if (mp[ss] != -1) {
                    ret.push_back(strs[mp[ss]]);
                    mp[ss] = -1;
                }
            }

            else{
                    mp[ss] = i;
                }

        }
        return ret;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}