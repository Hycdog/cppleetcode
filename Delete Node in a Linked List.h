//
// Created by hu on 1/6/19.
//

/**
 * 这道题也是强行加大了难度：从链表里删掉一个结点x
 * 如果是常规做法，肯定要先找到结点x前面的指针，把它的next
 * 指向结点x的后一个结点。但是这道题是直接给你一个要删的
 * 结点的地址，头结点神马的统统都不给。这样常规做法就不行了。
 * 有一个非常巧妙的方法，就是下面这种，直接把x下一个结点的数据复制到
 * 这一个结点。然后删掉原来x的下一个结点，这样就大功告成了！虽然不是很难
 * 但是还是非常巧妙的。
 */
#ifndef CPPLEETCODE_DELETE_NODE_IN_A_LINKED_LIST_H
#define CPPLEETCODE_DELETE_NODE_IN_A_LINKED_LIST_H

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
    void deleteNode(ListNode* node) {
        ListNode* nxt = node->next;
        if(nxt){
            node->val = nxt->val;
            node->next = nxt->next;
            delete nxt;
        }
        else{
            delete node;
        }
    }
};

#endif //CPPLEETCODE_DELETE_NODE_IN_A_LINKED_LIST_H
