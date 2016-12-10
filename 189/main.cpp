#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int> A) {

        int i = 0;

        while(i < A.size()) {

            if (A[i] != (i + 1) && A[i] > 0 && A[i] <= A.size() && A[i] != A[A[i] - 1])
                    swap(A[i], A[A[i] - 1]);
            else
                i++;
        }

        for (i = 0; i < A.size(); i++)
            if (A[i] !=  i+1)
                return i+1;

        return i+1;

    }
};


int main() {

    vector<int> a = {3,4,-1,1};

    Solution ans;

    cout << ans.firstMissingPositive(a);




}