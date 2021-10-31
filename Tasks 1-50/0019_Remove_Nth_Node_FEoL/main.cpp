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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        auto *temp_output = head;

        int length = 0;
        while (temp_output){
            ++length;
            temp_output = temp_output -> next;
        }

        ListNode output(0, head);
        temp_output = &output;

        for (int i = 0; i < length - n; ++i)
            temp_output = temp_output -> next;

        (temp_output -> next -> next) ?
        temp_output -> next = temp_output -> next -> next:
        temp_output -> next = nullptr;

        return output.next;
    }
};
