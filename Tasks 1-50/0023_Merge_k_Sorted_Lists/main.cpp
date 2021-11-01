#include <bits/stdc++.h>

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *connect(std::vector<int> &output, int it){
        if (it == output.size() - 1){
            auto *temp = new ListNode(output[it]);
            return temp;
        }
        else{
            auto *temp = new ListNode(output[it], connect(output, it + 1));
            return temp;
        }
    }

    ListNode *mergeKLists(std::vector<ListNode*> &lists) {
        std::vector<int> output_vec;
        for (auto &i : lists){
            auto *temp = i;
            while(temp){
                output_vec.push_back(temp -> val);
                temp = temp -> next;
            }
        }

        std::sort(output_vec.begin(), output_vec.end());

        ListNode *output = nullptr;
        if (output_vec.empty())
            return output;

        output = connect(output_vec, 0);
        return output;
    }
};

