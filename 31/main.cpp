#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int partitionArray(vector<int> &nums, int k) {
        int i = 0;
        int j = nums.size()-1;
        int ret = i + 1;

        while(i < j){
            if (nums[i] < k){
                i++;
                ret++;
            }
            else{
                swap(nums[i],nums[j]);
                j--;
            }
        }

        if (nums.size() == 0)
            return 0;
        else if (nums[i] >= k)
            return i;
        else
            return i+1;

    }
};

int main() {
    Solution ans;
    vector<int> s = {7,7,9,8,6,6,8,7,9,8,6,6};
    cout << ans.partitionArray(s, 10) << endl;
    for (int i = 0; i < s.size(); i++)
        cout << s[i] << " ";
    cout << endl;
    return 0;
}