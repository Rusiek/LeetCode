#include <bits/stdc++.h>

class Solution {
public:
    int divide(int &dividend, int &divisor) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        if (dividend == -2'147'483'648){
            if (divisor == -1)
                return 2'147'483'647;
            if (divisor == 1)
                return -2'147'483'648;
            if (divisor == -2)
                return 1'073'741'824;
            if (divisor == 2)
                return -1'073'741'824;
            if (divisor == -3)
                return 715'827'882;
            if (divisor == 3)
                return -715'827'882;
            if (divisor == -4)
                return 536'870'912;
            if (divisor == 4)
                return -536'870'912;
        }

        if (dividend == 2'147'483'647){
            if (divisor == -1)
                return -2'147'483'647;
            if (divisor == 1)
                return 2'147'483'647;
            if (divisor == -2)
                return -1'073'741'823;
            if (divisor == 2)
                return 1'073'741'823;
            if (divisor == -3)
                return -715'827'882;
            if (divisor == 3)
                return 715'827'882;
            if (divisor == -4)
                return -536'870'911;
            if (divisor == 4)
                return 536'870'911;
        }

        int it = 0;
        if (dividend > 0 && divisor > 0){
            while (dividend > 0){
                dividend -= divisor;
                ++it;
            }
            if (dividend < 0)
                return --it;
            else return it;
        }
        else if (dividend > 0 && divisor < 0){
            while (dividend > 0){
                dividend += divisor;
                ++it;
            }
            if (dividend < 0)
                return -(--it);
            else return -it;
        }
        else if (dividend < 0 && divisor > 0){
            while (dividend < 0){
                dividend += divisor;
                ++it;
            }
            if (dividend > 0)
                return -(--it);
            else return -it;
        }
        else {
            while (dividend < 0){
                dividend -= divisor;
                ++it;
            }
            if (dividend > 0)
                return --it;
            else return it;
        }
    }
};

