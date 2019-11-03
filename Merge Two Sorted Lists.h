//
// Created by hu on 1/9/19.
//
/**
 * https://leetcode.com/problems/merge-two-sorted-lists/
 * Discussion 第一名的递归做法
 *  确实非常beautiful有没有！简而言之每一次递归都是把小的那个拿出来做头
 *  然后return这个头
 *  还是非常帅气的有木有！
 *
 */
#ifndef CPPLEETCODE_MERGE_TWO_SORTED_LISTS_H
#define CPPLEETCODE_MERGE_TWO_SORTED_LISTS_H

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;

        if(l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l2->next, l1);
            return l2;
        }
    }
};
#endif //CPPLEETCODE_MERGE_TWO_SORTED_LISTS_H
