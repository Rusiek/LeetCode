#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int> &candidates, int target) {
        auto *tab = new std::vector<std::vector<int>> [target + 1];

        for (auto &i : candidates){
            std::vector<int> temp = {i};

            if (i <= target)
                tab[i].push_back(temp);

            for (int j = 1; j + i <= target; ++j)
                if (!tab[j].empty())
                    for (auto &k : tab[j]) {
                        std::vector<int> temp_k = k;
                        temp_k.push_back(i);
                        tab[j + i].push_back(temp_k);
                    }

        }
        std::vector<std::vector<int>> output = tab[target];
        delete [] tab;
        return output;
    }
};
