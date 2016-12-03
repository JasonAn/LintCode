#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
    public:
        /**
         * @param A: a list of integers
         * @return : return an integer
         */
        int removeDuplicates(vector<int> &nums) {
            int count = 0;

            if (nums.size() <2 )
                return nums.size();

            for (int i = 0; i < nums.size()-1; i++){
                if(nums[i] == nums[i+1]){
                    nums.erase(nums.begin() + i);
                    i--;
                }
            }

            for (int i = 0; i < nums.size(); i++)
                cout << nums[i] << " ";
            cout << endl;

            return nums.size();


        }
    };

int main() {

    vector<int> a = {};

    Solution ans;

    cout << ans.removeDuplicates(a);

    return 0;
}