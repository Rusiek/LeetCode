#include <bits/stdc++.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *output = nullptr;
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2, int n_num = 0) {
        if (l1 && l2){
            int x = l1 -> val + l2 -> val + n_num;
            auto *temp = new ListNode(x % 10);
            x >= 10 ? n_num = 1 : n_num = 0;
            temp -> next = addTwoNumbers(l1 -> next, l2 -> next, n_num);
            output = temp;
        }
        else if (l1){
            int x = l1 -> val + n_num;
            auto *temp = new ListNode(x % 10);
            x >= 10 ? n_num = 1 : n_num = 0;
            temp -> next = addTwoNumbers(l1 -> next, l2, n_num);
            output = temp;
        }
        else if (l2){
            int x = l2 -> val + n_num;
            auto *temp = new ListNode(x % 10);
            x >= 10 ? n_num = 1 : n_num = 0;
            temp -> next = addTwoNumbers(l1, l2 -> next, n_num);
            output = temp;
        }
        else{
            if (n_num){
                auto *temp = new ListNode(n_num);
                n_num = 0;
                temp -> next = addTwoNumbers(l1, l2, n_num);
                output = temp;
            }
        }
        return output;
    }
};

int main() {

    ListNode A(4), B(2), C(6), D(9);
    ListNode X(2), Y(1), Z(8);

    A.next = &B;
    B.next = &C;
    C.next = &D;

    X.next = &Y;
    Y.next = &Z;

    Solution ABC;
    ABC.addTwoNumbers(&A, &X);


    return 0;
}
