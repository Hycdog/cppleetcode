//
// Created by hu on 1/5/19.
//
/**
 * 这个代码其实之前我就是抄的w同学的
 * 但是这段更好：所谓的链表倒转，其实很简单，把除了root->next外所有的next指向cur，
 * 然后root->next指向尾巴结点就好了。
 *
 */
#ifndef CPPLEETCODE_REVERSE_LINKED_LIST_H
#define CPPLEETCODE_REVERSE_LINKED_LIST_H
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
struct ListNode* reverseList(struct ListNode* head) {

    if (head == nullptr) {
        return nullptr;
    }

    struct ListNode *previous = nullptr;
    struct ListNode *current = head;

    while (current) {
        struct ListNode *next = current->next;
        if (next == nullptr) {
            head = current;
        }
        current->next = previous;
        previous = current;
        current = next;
    }

    return head;

}
#endif //CPPLEETCODE_REVERSE_LINKED_LIST_H
