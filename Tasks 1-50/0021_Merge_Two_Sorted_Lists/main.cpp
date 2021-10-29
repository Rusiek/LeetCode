#include <bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *output = nullptr;
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if (l1 && l2){
            if (l1 -> val < l2 -> val) {
                auto *temp = new ListNode(l1 -> val, mergeTwoLists(l1 -> next, l2));
                output = temp;
            }
            else {
                auto *temp = new ListNode(l2 -> val, mergeTwoLists(l1, l2 -> next));
                output = temp;
            }
        }
        else if (l1){
            auto *temp = new ListNode(l1 -> val, mergeTwoLists(l1 -> next, l2));
            output = temp;
        }
        else if (l2){
            auto *temp = new ListNode(l2 -> val, mergeTwoLists(l1, l2 -> next));
            output = temp;
        }
        return output;
    }
};
