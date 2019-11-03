//
// Created by hu on 1/7/19.
//

/**
 * 第一个是大佬的代码，第二个是我的
 * 第一次离大佬那么近有木有！TAT 思路基本是一样的 但是我的while太过复杂
 * 其实条件可以再提炼一下放到大前提里面
 * 基本思路就是奇数一个链，偶数一个链，然后奇数尾巴后面接着偶数的头
 */
#ifndef CPPLEETCODE_ODD_EVEN_LINKED_LIST_H
#define CPPLEETCODE_ODD_EVEN_LINKED_LIST_H
ListNode* oddEvenList(ListNode* head)
{
    if(!head) return head;
    ListNode *odd=head, *evenhead=head->next, *even = evenhead;
    while(even && even->next)
    {
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = evenhead;
    return head;
}

class MySolution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head)return nullptr;
        ListNode* evenHead = head->next;
        ListNode* evenPtr = head->next;
        ListNode* oddHead = head;
        while(oddHead->next){//=evenHead
            evenHead = oddHead->next;
            oddHead->next = (oddHead->next)->next;
            if(evenHead->next)
                evenHead->next = (evenHead->next)->next;
            if(oddHead->next)//=evenHead
                oddHead = oddHead->next;
        }
        oddHead->next = evenPtr;
        return head;
    }
};
#endif //CPPLEETCODE_ODD_EVEN_LINKED_LIST_H
