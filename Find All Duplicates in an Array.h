//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/
 * 这道题的解法有点局限性，那就是题目说0<nums[i]<=nums.size()
 * 所以，只需要通过下标、符号来表示是否重复
 * 但是答案写的&=0x7fffffff
 * |=0x80000000……
 * 真的有必要吗！
 * 写个abs()
 * *=-1会死？
 * 这年头编译器都会对这种优化的吧
 */
#ifndef CPPLEETCODE_FIND_ALL_DUPLICATES_IN_AN_ARRAY_H
#define CPPLEETCODE_FIND_ALL_DUPLICATES_IN_AN_ARRAY_H
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> r;
        for (int i = 0; i < nums.size(); ++i) {
            int index = abs(nums[i]);// 01111111 11111111 11111111 11111111
            if (nums[index - 1] < 0) {
                r.push_back(index);
            }
            else {
                // nums[index - 1] |= 0x80000000;
                nums[index - 1] *= -1;
            }
        }
        return r;
    }
};
#endif //CPPLEETCODE_FIND_ALL_DUPLICATES_IN_AN_ARRAY_H
