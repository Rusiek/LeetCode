#include <bits/stdc++.h>

class Solution {
public:
    std::string longestPalindrome(std::string s) {
        long long p = 1000000009;
        long long q = 257;
        int tab_size = s.size() + 3;
        auto *tab = new long long[tab_size];

        tab[0] = 1;
        for (int i = 1; i < tab_size; ++i)
            tab[i] = (tab[i - 1] * q) % p;

        auto *hash_f = new long long [s.size() + 1];
        hash_f[0] = 0;
        for (int i = 0; i < s.size(); ++i)
            hash_f[i + 1] = (hash_f[i] + static_cast<long long>(s[i]) * tab[i]) % p;

        auto *hash_r = new long long [s.size() + 1];
        hash_r[0] = 0;
        for (int i = 0; i < s.size(); ++i)
            hash_r[i + 1] = (hash_r[i] + static_cast<long long>(s[s.size() - i - 1]) * tab[i]) % p;

        std::string output = "";
        for (int i = 0; i < s.size(); ++i)
            for (int j = i; j < s.size(); ++j){
                long long l = (hash_f[j + 1] - hash_f[i] + p) % p;
                l *= tab[s.size() - j];
                l %= p;

                long long r = (hash_r[s.size() - i] - hash_r[s.size() - j - 1] + p) % p;
                r *= tab[i + 1];
                r %= p;

                if (l == r && j - i + 1 > output.size()) {
                    output = "";
                    for (int k = i; k <= j; ++k)
                        output += s[k];
                }
            }

        return output;
    }
};

