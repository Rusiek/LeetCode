#include <bits/stdc++.h>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string> &strs) {
        if (strs.size() == 1)
            return strs[0];

        std::string output = "";
        for (int i = 0;; ++i){
            for (int j = 0; j < strs.size(); ++j){
                if (strs[j].size() <= i) break;
                if (strs[j][i] != strs[0][i]) break;
            }
            output += strs[0][i];
        }

        return output;
    }
};