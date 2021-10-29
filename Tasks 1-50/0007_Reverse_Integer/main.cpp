#include <bits/stdc++.h>

class Solution {
public:
    int reverse(int x) {
        if (x == -2'147'483'648)
            return 0;

        char sign;
        x < 0 ? sign = '-' : sign = '+';
        if (sign == '-')
            x *= -1;

        int y = 0;
        int i_range = 214'748'364;
        while(x){
            if (y < i_range) {
                y = y * 10 + x % 10;
                x /= 10;
            }
            else if (y == i_range){
                if (sign == '-' && x % 10 < 9)
                    return (y * 10 + x % 10) * (-1);
                else if (sign == '+' && x % 10 < 8)
                    return y * 10 + x % 10;
                else return 0;
            }
            else return 0;
        }
        if (sign == '+')
            return y;
        else return -y;
    }
};
