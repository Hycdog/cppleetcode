//
// Created by hu on 1/7/19.
//
/**
 * 要输出给定集合的所有子集。
 * 下面做法的思路是：
 * https://leetcode.com/problems/subsets/discuss/27278/C%2B%2B-RecursiveIterativeBit-Manipulation
 * 把每一个元素加到当前存在的所有集合中，然后把这个集合跟当前存在的集合merge。
 */
#ifndef CPPLEETCODE_SUBSET_H
#define CPPLEETCODE_SUBSET_H

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs(1, vector<int>());
        for (int i = 0; i < nums.size(); i++) {
            int n = subs.size();
            for (int j = 0; j < n; j++) {
                subs.push_back(subs[j]);
                subs.back().push_back(nums[i]);
            }
        }
        return subs;
    }
};
#endif //CPPLEETCODE_SUBSET_H
