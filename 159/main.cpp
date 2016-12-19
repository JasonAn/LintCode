#include <iostream>

class Solution {
public:
    /**
     * @param nums: a rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> &nums) {

        if (nums.size() == 1)
            return nums[0];

        int l = 0;
        int r = nums.size()-1;
        int mid = (l + r)/2;

        while(l < r - 1 and nums[l] > nums[r]){
            mid = (l + r) / 2;


            if(nums[l] >= nums[mid] && nums[r] >= nums[mid])
                r = mid;
            else
                l = mid;

        }

        if (nums[l] < nums[r])
            return nums[l];
        else
            return min(nums[mid], nums[r]);


    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}