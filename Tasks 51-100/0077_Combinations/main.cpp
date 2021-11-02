#include <bits/stdc++.h>

class Solution {
    void make_comb(int n, int k, bool *tab, std::vector<std::vector<int>> &output, std::vector<int> &input, int it = 0){
        if (k == 0)
            output.push_back(input);
        else for (int i = it; i < n; ++i)
            if (!tab[i]) {
                tab[i] = true;
                input.push_back(i + 1);
                make_comb(n, k - 1, tab, output, input, i + 1);
                input.pop_back();
                tab[i] = false;
            }
    }

public:
    std::vector<std::vector<int>> combine(int n, int k) {
        auto *tab = new bool [n];
        for (int i = 0; i < n; ++i)
            tab[i] = false;

        std::vector<std::vector<int>> output;
        std::vector<int> input;
        make_comb(n, k, tab, output, input);
        return output;
    }
};
