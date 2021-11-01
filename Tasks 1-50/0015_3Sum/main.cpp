#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums) {
        std::sort(nums.begin(), nums.end());
        std::set<std::vector<int>> output_set;

        for (int i = 0; i < nums.size(); ++i){
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                    ++j;
                else if (sum > 0)
                    --k;
                else{
                    std::vector<int> temp = {nums[i], nums[j], nums[k]};
                    output_set.insert(temp);
                    ++j;
                }
            }
        }

        std::vector<std::vector<int>> output;
        output.reserve(output_set.size());

        for (auto &i : output_set)
            output.push_back(i);

        return output;
    }
};