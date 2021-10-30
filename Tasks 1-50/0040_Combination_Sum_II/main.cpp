#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::vector<int>> combinationSum2(std::vector<int> &candidates, int target) {
        auto *tab = new std::set<std::multiset<int>> [target + 1];
        std::queue<std::pair<std::multiset<int>, int>> Q;

        for (auto &i : candidates){
            if (i <= target) {
                std::multiset<int> temp_Q = {i};
                std::pair<std::multiset<int>, int> temp_pair = std::make_pair(temp_Q, i);
                Q.push(temp_pair);
            }

            for (int j = 0; j + i <= target; ++j)
                if (!tab[j].empty())
                    for (auto &k : tab[j]){
                        auto temp_k = k;
                        temp_k.insert(i);
                        Q.push(std::make_pair(temp_k, j + i));
                    }

            while (!Q.empty()){
                tab[Q.front().second].insert(Q.front().first);
                Q.pop();
            }
        }

        std::set<std::vector<int>> output_set;
        for (auto &i : tab[target]) {
            std::vector<int> temp;
            temp.reserve(i.size());
            for (int it : i)
                temp.push_back(it);
            output_set.insert(temp);
        }
        delete [] tab;

        std::vector<std::vector<int>> output;
        output.reserve(output_set.size());

        for (auto &it : output_set)
            output.push_back(it);

        return output;
    }
};

