#include <iostream>
class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0.
     */
    int binarySearch(vector<int> &array, int target) {
        int i =0, j = array.size()-1;



        while(i<j){
            int m = (i + j)/2;

            // cout <<i << " " << m  << " " << j << endl;

            if(array[m] == target){
                while(m > 0 && array[m-1] == target){
                    m--;
                }
                return m;
            }

            else if(j == i + 1 && array[i] < target && array[j] > target)
                return -1;

            else if(array[m] < target)
                i = m;
            else
                j = m;
        }

        return -1;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}