#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {
        std::vector<int> temp = nums;

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

        for (int x = 0; x < nums.size(); ++x)
            if (nums[x] == temp[i] || nums[x] == temp[j])
                output.push_back(x);

        return output;
    }
};