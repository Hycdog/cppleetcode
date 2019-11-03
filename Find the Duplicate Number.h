//
// Created by hu on 1/8/19.
//

/**
 * 还记得静态链表吗……
 * https://leetcode.com/problems/find-the-duplicate-number/discuss/72846/My-easy-understood-solution-with-O(n)-time-and-O(1)-space-without-modifying-the-array.-With-clear-explanation.
 * Use two pointers the fast and the slow. The fast one goes forward two steps each time, while the slow one goes only step each time. They must meet the same item when slow==fast. In fact, they meet in a circle, the duplicate number must be the entry point of the circle when visiting the array from nums[0]. Next we just need to find the entry point. We use a point(we can use the fast one before) to visit form begining with one step each time, do the same job to slow. When fast==slow, they meet at the entry point of the circle. The easy understood code is as follows.
 * 意思就是把这个数组当静态链表，两个指针赛跑，快的一次两格，慢的一次一格，最后一定在环上相遇，
 * 这个环的入口就是要找的重复数字
 */
#ifndef CPPLEETCODE_FIND_THE_DUPLICATE_NUMBER_H
#define CPPLEETCODE_FIND_THE_DUPLICATE_NUMBER_H

int findDuplicate(vector<int>& nums)
{
    if (nums.size() > 1)
    {
        int slow = nums[0];
        int fast = nums[nums[0]];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        fast = 0;
        while (fast != slow)
        {
            fast = nums[fast];
            slow = nums[slow];
        }
        return slow;
    }
    return -1;
}

#endif //CPPLEETCODE_FIND_THE_DUPLICATE_NUMBER_H
