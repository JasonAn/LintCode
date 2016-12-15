#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * @param numbers: Give an array numbers of n integer
     * @param target: An integer
     * @return: return the sum of the three integers, the sum closest target.
     */
    int threeSumClosest(vector<int> nums, int target) {

        sort(nums.begin(), nums.end());

        int i = 0;

        int ret = nums[i] + nums[i + 1] + nums[i + 2];
        int dis = abs(target - ret);

        for (i = 0; (i + 2) < nums.size(); i++) {

            int newtarget = target - nums[i];

            int l = i + 1;
            int r = nums.size() - 1;

            while (l < r) {
                int newdis = newtarget - nums[l] - nums[r];

                if (newdis == 0)
                    return target;
                else {
                    if (abs(newdis) < dis) {
                        ret = nums[l] + nums[r] + nums[i];
                        dis = abs(target - ret);
                    }

                    if (newdis > 0) {
                        l++;

                    } else
                        r--;
                }
            }

        }

        return ret;
    }
};

int main() {

    vector<int> s = {-2,-3,5,-1,-4,5,-11,7,1,2,3,4,-7,-1,-2,-3,-4,-5};

    Solution ans;

    cout << ans.threeSumClosest(s, 45);

    return 0;
}