#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param A: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        vector<long long> ret;
        int sz = nums.size();
        long long left = 1;
        ret.push_back(1);
        for (int i = 0; i < sz-1; i++){
            cout << left << endl;
            left *= nums[i];
            ret.push_back(left);
        }

        long long right = nums[sz-1];
        for (int i = sz-2; i >= 0; i--){
            ret[i] *= right;
            right *= nums[i];
        }

        return ret;
    }
};


int main() {

    Solution ans;

    vector<int> a = {1, 2, 3};

    auto b = ans.productExcludeItself(a);

    for (int i = 0; i < b.size(); i++)
        cout << b[i] << ' ';

    return 0;
}