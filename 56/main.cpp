#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {

        int i = 0;

        while(i < nums.size()){
            int j = nums.size()-1;
            while(i < j){
                if((nums[i]+ nums[j]) == target){
                    vector<int> ret = {i+1, j+1};
                    return ret;
                }
                else
                    j--;
            }
            i++;
        }
    }
};

int main() {
    vector<int> a = {1, 0, -1};
    Solution ans;
    auto b = ans.twoSum(a, -1);
    cout << b[0] << b[1];
    return 0;
}