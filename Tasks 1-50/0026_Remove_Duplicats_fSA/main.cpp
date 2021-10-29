#include <bits/stdc++.h>

class Solution {
public:
    int out_range = 1003;
    int removeDuplicates(std::vector<int> &nums) {
        for (int i = 1; i < nums.size(); ++i)
            if (nums[i] == nums[i - 1])
                nums[i - 1] = out_range;

        int j = 0;

        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] != out_range){
                std::swap(nums[i], nums[j]);
                ++j;
            }
        }

        return j;
    }
};
