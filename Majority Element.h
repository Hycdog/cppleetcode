//
// Created by hu on 1/7/19.
//
/**
 * 这道题也是有非常多的解法，下面这个是moore's voting算法
 * 就是先入为主成为candidate，下一个还是你，就加上一票，但是一旦遇到不是你，就扣掉一票
 * 只要有一个数字是大于n/2的，最后剩下的一定是它，因为和它抵消的数字数量比它的数量少。
 * 可以算是个很经典的算法吧。
 */
#ifndef CPPLEETCODE_MAJORITY_ELEMENT_H
#define CPPLEETCODE_MAJORITY_ELEMENT_H

static const auto speedup = []() { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0; }();
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (!nums.size()) return NULL;
        int count = 1, candidate = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (!count) candidate = nums[i];
            count += (candidate == nums[i])? 1 : -1;
        }
        return candidate;
    }
};

#endif //CPPLEETCODE_MAJORITY_ELEMENT_H
