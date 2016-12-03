#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {

        vector<char> s, t;

        int i = 0, j = 0;

        while(isalpha(source[i])){
            s.push_back(source[i]);
            i++;
        }

        i = 0;

        while(isalpha(target[i])){
            t.push_back(target[i]);
            i++;
        }


        if (t.size() == 0)
            return 0;

        if (s.size() < t.size()) {
            cout << "yes";
            return -1;
        }

        for(i = 0; i < s.size(); i++) {
            for (j = 0; j < t.size(); j++) {
                if ((i + j) < s.size() && s[i+j] != t[j])
                    break;
            }

            if (j == t.size())
                return i;
        }

        return -1;
    }
};

int main() {

    char source[] = "\0";

    char *s = source;


    char target[] = "a";
    char *t = target;

    Solution a;

    cout << a.strStr(s, t);


    return 0;
}
