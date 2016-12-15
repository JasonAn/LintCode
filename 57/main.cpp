#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &nums) {
        vector<vector<int>> ret;

        sort(nums.begin(), nums.end());

        int sz = nums.size();

        set<vector<int>> ss;

        for (int i = 0; i <sz ; i++)
        {
            int target = 0 - nums[i];

            int l = i + 1;
            int r = sz - 1;

            while(l < r) {
                if (nums[l] + nums[r] == target) {
                    ss.insert({nums[i], nums[l], nums[r]});
                    l++;
                } else if (nums[l] + nums[r] < target)
                    l++;
                else
                    r--;
            }

        }

        for(auto i = ss.begin(); i != ss.end(); i++)
            ret.push_back(*i);

    return ret;

    }
};


int main(){

    vector<int> a = {-2,-3,5,-1,-4,5,-11,7,1,2,3,4,-7,-1,-2,-3,-4,-5};

    Solution ans;

    auto b = ans.threeSum(a);

    for(int i = 0; i < b.size(); i++) {
        for (int j = 0; j < 3; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }



    return 0;
}