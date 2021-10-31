#include <bits/stdc++.h>

class Solution {
public:
    int romanToInt(std::string s) {
        int output = 0;

        int it = 0;
        while (it != s.size()){
            if (s[it] == 'M'){
                ++it;
                output += 1000;
            }
            else if (s[it] == 'D'){
                ++it;
                output += 500;
            }
            else if (s[it] == 'C'){
                if (s[it + 1] == 'M'){
                    it += 2;
                    output += 900;
                }
                else if (s[it + 1] == 'D'){
                    it += 2;
                    output += 400;
                }
                else{
                    ++it;
                    output += 100;
                }
            }
            else if (s[it] == 'L'){
                ++it;
                output += 50;
            }
            else if (s[it] == 'X'){
                if (s[it + 1] == 'C'){
                    it += 2;
                    output += 90;
                }
                else if (s[it + 1] == 'L'){
                    it += 2;
                    output += 40;
                }
                else{
                    ++it;
                    output += 10;
                }
            }
            else if (s[it] == 'V'){
                ++it;
                output += 5;
            }
            else if (s[it] == 'I'){
                if (s[it + 1] == 'X'){
                    it += 2;
                    output += 9;
                }
                else if (s[it + 1] == 'V'){
                    it += 2;
                    output += 4;
                }
                else {
                    ++it;
                    output += 1;
                }
            }
        }

        return output;
    }
};