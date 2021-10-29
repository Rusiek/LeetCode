#include <bits/stdc++.h>

class Solution {
public:
    double myPow(double x, long long n) {
        //std::cout << x << " " << n << '\n';
        if (n < 0)
            return 1 / myPow(x, -n);
        else {
            if (n == 0)
                return 1;
            else if (n % 2 == 0) {
                double y = myPow(x, n / 2);
                return y * y;
            }
            else return myPow(x, n - 1) * x;
        }
    }
};
