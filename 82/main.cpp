#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	 * @param A: Array of integers.
	 * return: The single number.
	 */
    int singleNumber(vector<int> &A) {

        int limit = 10000;
        int *a = new int[limit];

        for(int i = 0; i < A.size(); i++)
            a[A[i]]++;

        for(int i = 0; i < limit; i++)
            if (a[i] == 1)
                return i;

        return 0;
    }
};

int main() {

//    vector<int> a = {1,1,2,2,3,4,4};

    vector<int> a = {};

    Solution ans;

    cout << ans.singleNumber(a);

    return 0;
}