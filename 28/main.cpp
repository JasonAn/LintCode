#include <iostream>

class Solution {
public:
    /**
     * @param matrix, a list of lists of integers
     * @param target, an integer
     * @return a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int> > &matrix, int target) {

        int i = 0, j = matrix.size()-1;

        if (matrix.size() == 0 || matrix[0].size() == 0)
            return false;

        int m = i, n = i, k = matrix[0].size()-1;

        while(j > i + 1 && !(matrix[m][0] <= target && matrix[m][k] >= target))
        {
            // cout << i << " " << m << endl;
            m = (i + j) / 2;

            if (matrix[m][0] > target)
                j = m;
            else
                i = m;
        }

        if (!(matrix[m][0] <= target && matrix[m][k] >= target))
            m = j;

        //cout << m << endl;

        while(k > i + 1 && matrix[m][n] != target){
            //cout << i << " " << k << endl;
            n = (i + k) / 2;

            if (matrix[m][n] == target)
                return true;
            else if(matrix[m][n] < target)
                i = n;
            else
                k = n;
        }

        if (matrix[m][n] == target or matrix[m][k] == target)
            return true;
        else
            return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}