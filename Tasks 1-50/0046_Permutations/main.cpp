#include <bits/stdc++.h>

class Solution{
public:
    void generate (std::vector<int> &input, std::vector<std::vector<int>> &output, std::vector<int> &nums, bool *tab, int n, int m){
        if (m == n)
            output.push_back(input);
        else{
            for (int i = 0; i < n; ++i)
                if (!tab[i]){
                    tab[i] = true;
                    input.push_back(nums[i]);
                    generate(input, output, nums, tab, n, m + 1);
                    input.pop_back();
                    tab[i] = false;
                }
        }
    }

    auto permute (std::vector<int> &nums) {
        std::vector<std::vector<int>> output;

        bool *tab = new bool [nums.size()];
        for (int i = 0; i < nums.size(); ++i)
            tab[i] = false;

        std::vector<int> input;
        generate(input, output, nums, tab, nums.size(), 0);

        return output;
    }
};
