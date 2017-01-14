#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    /**
     *@param num: A list of non negative integers
     *@return: A string
     */

    bool issmall(int &A, int &B){
        string a = to_string(A) + to_string(B);
        string b = to_string(B) + to_string(A);

        if (a.compare(b) <= 0)
            return true;
        else
            return false;
    }

    int partition(vector<int> &num, int l, int r){
        int pvt = num[l];

        while(l < r){
            while (l < r && issmall(pvt, num[r]))
                r--;
            swap(num[l], num[r]);
            while (l < r && issmall(num[l], pvt))
                l++;
            swap(num[l], num[r]);
        }

        return l;
    }

    void quicksort(vector<int> &num, int l, int r){

        if (l < r){
            int pt_pvt = partition(num, l, r);
            quicksort(num, l, pt_pvt-1);
            quicksort(num, pt_pvt+1, r);
        }
    }

    string largestNumber(vector<int> &num) {

        string sst = {};

        quicksort(num, 0, num.size()-1);

//         for (int i = 0; i < num.size(); i++)
//             cout << num[i] << " ";

        for (int i = num.size()-1; i >=0; i--)
            sst += to_string(num[i]);

         if (sst.size() == 0 || sst[0] == '0')
            return to_string(0);
         else
             return sst;

    }
};


int main() {

    Solution ans;
    vector<int> r = {2147483647,2147483647,2147483646,9,1,8};

    cout << ans.largestNumber(r);

    return 0;
}