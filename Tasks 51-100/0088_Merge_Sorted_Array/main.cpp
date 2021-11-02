#include <bits/stdc++.h>

class Solution {
public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
        std::vector<int> temp;
        temp.reserve(n + m);
        int i = 0;
        int j = 0;

        while (i < m && j < n){
            if (nums1[i] < nums2[j])
                temp.push_back(nums1[i++]);
            else temp.push_back(nums2[j++]);
        }

        while (i < m)
            temp.push_back(nums1[i++]);

        while (j < n)
            temp.push_back(nums2[j++]);

        for (i = 0; i < n + m; ++i)
            nums1[i] = temp[i];
    }
};
