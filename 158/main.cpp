#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */
    bool anagram(string s, string t) {

        if (s.size() != t.size())
            return false;

        int sz = int('z' - 'A');

        int *s_array = new int[sz] {};
        int *t_array = new int[sz] {};

        for (int i = 0; i < s.size(); i++) {
            int m = int(s[i] - 'A');
            if (m >= 0)
                s_array[m]++;

            int n = int(t[i] - 'A');
            if (n >= 0)
                t_array[n]++;
        }

        for (int i = 0; i < sz; i++) {
            cout << char('A' + i) << " " << s_array[i] << " " << t_array[i] << endl;
            if (s_array[i] != t_array[i])
                return false;
        }

        return true;

    }
};

int main() {

    string s = "happy new year";
    string t = "n ahwryeypp ea";

    Solution a;

    cout << a.anagram(s, t);

    return 0;
}