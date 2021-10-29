#include <bits/stdc++.h>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int in_sequence[256];
        for (int &i : in_sequence)
            i = 0;

        if (s.empty())
            return 0;

        int i = 0;
        int j = 0;
        int output = 0;

        while (i < s.size()){
            if (0 == in_sequence[s[j]] && j < s.size()){
                ++in_sequence[s[j]];
                ++j;
                output = std::max(output, j - i);
            }
            else{
                --in_sequence[s[i]];
                ++i;
            }
        }

        return output;
    }
};
