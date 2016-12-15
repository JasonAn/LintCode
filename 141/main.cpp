#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {

        if (x == 0 or x == 1)
            return x;

        float a = 1, b = x, c, d;

        while(a < b) {

             c = (a + b) / 2;
             d = (a + b + 1)/2;

            if ( c * c <=x && d*d >= x)
                return (int)c;
            else if (d * d < x)
                a = (int)c;
            else
                b = (int)d;

            }
        }
};

int main() {
    Solution ans;
    cout << ans.sqrt(999999999);
    return 0;
}