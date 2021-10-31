#include <bits/stdc++.h>

class Solution {
public:
    int searchInsert(std::vector<int> &nums, int target) {
        int start = 0;
        int end = nums.size();
        int mid = (start + end) / 2;

        while (start < end){
            if (nums[mid] < target)
                start = mid + 1;
            else if (nums[mid] > target)
                end = mid;
            else break;
            mid = (start + end) / 2;
        }

        return mid;
    }
};
