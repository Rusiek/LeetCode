#include <bits/stdc++.h>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> kol;
        for (auto &i : s){
            if (i == '(' || i == '[' || i == '{')
                kol.push(i);
            else if (i == ')'){
                if (!kol.empty()){
                    if (kol.top() == '(')
                        kol.pop();
                    else return false;
                }
                else return false;
            }
            else if (i == ']'){
                if (!kol.empty()){
                    if (kol.top() == '[')
                        kol.pop();
                    else return false;
                }
                else return false;
            }
            else if (i == '}'){
                if (!kol.empty()){
                    if (kol.top() == '{')
                        kol.pop();
                    else return false;
                }
                else return false;
            }
        }
        return kol.empty();
    }
};
