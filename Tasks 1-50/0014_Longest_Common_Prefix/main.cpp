#include <bits/stdc++.h>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string> &strs) {
        if (strs.size() == 1)
            return strs[0];

        std::string output = "";
        for (int i = 0; i < strs[0].size(); ++i){
            bool quit = false;
            for (int j = 1; j < strs.size(); ++j){
                if (strs[j].size() == i){
                    quit = true;
                    break;
                }
                if (strs[j][i] != strs[0][i]){
                    quit = true;
                    break;
                }
            }
            if (quit) break;
            output += strs[0][i];
        }

        return output;
    }
};