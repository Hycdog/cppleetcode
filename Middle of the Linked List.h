//
// Created by hu on 19-1-15.
//

/**
 * https://leetcode.com/problems/middle-of-the-linked-list/submissions/
 * 求链表中间一个结点，用fast和slow就好了。
 *
 */
#ifndef CPPLEETCODE_MIDDLE_OF_THE_LINKED_LIST_H
#define CPPLEETCODE_MIDDLE_OF_THE_LINKED_LIST_H
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head, *slow=head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};
#endif //CPPLEETCODE_MIDDLE_OF_THE_LINKED_LIST_H
