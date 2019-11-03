//
// Created by hu on 1/3/19.
//

/**
 *
 * 求给定数组的所有排列组合顺序
 * 这个我全部拿next_permutation做了，偷懒2333
 * 但是也有其他做法，见leetcode
 */
#ifndef CPPLEETCODE_PERMUTATIONS_H
#define CPPLEETCODE_PERMUTATIONS_H

#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    /**
     *
     * @param nums a collection of distinct integers
     * @return all possible permutations of the given integers
     */
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        do{result.push_back(nums);}
        while(next_permutation(nums.begin(),nums.end()));
        return result;
    }
};
#endif //CPPLEETCODE_PERMUTATIONS_H
