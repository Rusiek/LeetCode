#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::string> generateParenthesis(int n) {
        if (n == 1) {
            std::vector<std::string> output;
            output.push_back("()");
            return output;
        }
        else{
            std::set<std::string> set_output;
            std::vector<std::string> multi_output = generateParenthesis(n - 1);
            for (auto &i : multi_output){
                for (int j = 0; j < i.size(); ++j){
                    std::string set_input = i;
                    if (i[j] == '('){
                        set_input.replace(j, 1, "(()");
                        set_output.insert(set_input);
                        set_input = i;
                        set_input.replace(j, 1, "()(");
                        set_output.insert(set_input);
                    }
                    else {
                        set_input.replace(j, 1, ")()");
                        set_output.insert(set_input);
                    }
                }
            }

            std::vector<std::string> output;
            output.reserve(set_output.size());
            for (auto it : set_output)
                output.push_back(it);

            return output;
        }
    }
};
