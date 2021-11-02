#include <bits/stdc++.h>

class Solution{
public:
    int lengthOfLastWord(std::string s) {
        int it = s.size() - 1;
        while (it >= 0) {
            if (s[it] == ' ') --it;
            else break;
        }

        int output = 0;
        while (s[it] != ' ') {
            ++output;
            --it;
            if (it < 0) break;
        }

        return output;
    }
};
