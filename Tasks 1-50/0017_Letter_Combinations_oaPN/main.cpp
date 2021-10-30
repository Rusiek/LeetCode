#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        int coding_size = 8;
        std::vector<char> coding[coding_size];
        char c = 'a';
        for (int i = 0; i < coding_size; ++i){
            if (7 != i + 2 && 9 != i + 2)
                for (int j = 0; j < 3; ++j)
                    coding[i].push_back(c++);
            else
                for (int j = 0; j < 4; ++j)
                    coding[i].push_back(c++);
        }

        std::deque<std::string> temp;
        int temp_size = 0;
        if (digits.empty()) return {};
        for (int i = 0; i < digits.size(); ++i){
            if (!i){
                for (char j : coding[digits[i] - '2']) {
                    std::string x;
                    x += j;
                    temp.push_back(x);
                }
                temp_size = temp.size();
            }
            else{
                for (int j = 0; j < temp_size; ++j){
                    for (char k : coding[digits[i] - '2']) {
                        std::string x = temp[j];
                        x += k;
                        temp.push_back(x);
                    }
                }
                for (int j = 0; j < temp_size; ++j)
                    temp.pop_front();
                temp_size = temp.size();
            }
        }

        std::vector<std::string> output;
        output.reserve(temp.size());
        for (auto &i : temp)
            output.push_back(i);

        return output;
    }
};
