#include <bits/stdc++.h>

class Solution {
public:
    int out_range = -1;
    int removeElement(std::vector<int> &nums, int val) {
        for (int i = 0; i < nums.size(); ++i)
            if (nums[i] == val)
                nums[i] = out_range;

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
