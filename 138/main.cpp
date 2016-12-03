#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number
     *          and the index of the last number
     */
    vector<int> subarraySum(vector<int> nums){

        map<int, int> mp;
        int curr_sum = 0;
        vector<int> ret;

        for (int i = 0; i < nums.size(); i++)
        {
            curr_sum += nums[i];

            if (mp.find(curr_sum) == mp.end())
                mp[curr_sum ] = i;
            else {
                ret.push_back(mp[curr_sum]+1);
                ret.push_back(i);
                return ret;
            }

            if (curr_sum == 0)
            {
                ret.push_back(0);
                ret.push_back(i);
                return ret;

            }
        }
    }
};

int main() {

    vector<int> a = {-5,10,5,-3,1,1,1,-2,3,-4};
    Solution sol;

    auto r = sol.subarraySum(a);

    cout << r[0] << r[1];

    return 0;
}