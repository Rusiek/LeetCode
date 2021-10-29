#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(long long &x) {
        if (x < 0) return false;
        if (x < 10) return true;
        long long temp = x;
        long long y = 0;
        while (temp > 0){
            y = 10 * y + temp % 10;
            temp /= 10;
        }
        return y == x;
    }
};

