#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int> &tab, int target) {
        std::vector<int> temp = tab;

        std::sort(temp.begin(), temp.end());

        int i = 0;
        int j = temp.size() - 1;

        while (i < j){
            int sum = temp[i] + temp[j];
            if (sum < target) ++i;
            else if (sum > target) --j;
            else break;
        }

        std::vector<int> output;

        for (int x = 0; x < tab.size(); ++x)
            if (tab[x] == temp[i] || tab[x] == temp[j])
                output.push_back(x);

        return output;
    }
};