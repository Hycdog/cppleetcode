//
// Created by hu on 12/28/18.
//
/**
 * https://leetcode.com/problems/add-two-numbers/
 * 这道题目是把两个整数的每一个数字位作为单链表的结点输入，
 * 然后输出一个单链表表示他俩的和
 * 看上去不难，但实际上还是有坑的。首先，加法需要考虑进位，
 * 但是进位到底要在什么时候进？所以我在写的时候就分了last和next
 * 代表上一次的进位和这一次的进位。但实际上看大神的代码，他在循环里多加了c
 * 所以只要一个c就够了。因为加到最高位，如果没有进位就不需要新的结点，只有c为1
 * 才需要多加一位。
 *
 */
#ifndef CPPLEETCODE_ADD_TWO_NUMBERS_H
#define CPPLEETCODE_ADD_TWO_NUMBERS_H
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        ListNode *ptr = head;
        int c = 0;
        while(l1||l2||c){
            int sum = (l1 ? l1->val:0) + (l2? l2->val:0) + c;
            ptr->next = new ListNode(sum%10);
            c = sum / 10;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
            ptr = ptr->next;
        }
        return head->next;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class MySolution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p = new ListNode(0);
        ListNode* init = p;
        int lastcarrybit = 0;
        int nextcarrybit = 0;
        int sum=0;
        ListNode *l1_t = l1;
        ListNode *l2_t = l2;
        while(l1_t || l2_t)
        {

            if(l1_t)sum+=l1_t->val;
            if(l2_t)sum+=l2_t->val;
            nextcarrybit=(sum+lastcarrybit)/10;
            sum=(sum+lastcarrybit)%10;
            p->val = sum;
            lastcarrybit=nextcarrybit;
            sum=0;
            if(l1_t)l1_t=l1_t->next;
            if(l2_t)l2_t=l2_t->next;
            if(l1_t || l2_t)
                p->next = new ListNode(0);
            else if(lastcarrybit)
            {
                p->next = new ListNode(1);
                (p->next)->next = NULL;
            }
            else
            {
                p->next=NULL;
            }
            p=p->next;
        }
        return init;
    }
};

#endif //CPPLEETCODE_ADD_TWO_NUMBERS_H
