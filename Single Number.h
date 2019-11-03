//
// Created by hu on 1/3/19.
//

/**
 * 这道题是我刷leetcode第一个礼拜来见到的解法最惊艳的，也让我更加重视位操作了。
 * 底下的评论清一色的Genius……真心佩服这位大神
 *
 * 还记得数字逻辑的 A^B^A=A吗……
 * 当然也有人提出了，如果重复奇数次就不行。但这个问题只要求去掉重复两次的。
 * 按位操作，显然是最快的……也是看上去简单的令人难以置信
 */
#ifndef CPPLEETCODE_SINGLE_NUMBER_H
#define CPPLEETCODE_SINGLE_NUMBER_H

#include <vector>
using namespace std;
class Solution {
public:
    /**
     *
     * @param nums  Given a non-empty array of integers, every element appears twice except for one. Find that single one.
     * @return The single one.
     */
    int singleNumber(vector<int>& nums) {
        int index = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            index ^= nums[i];//原理:A^B^A=B
        }
        return index;
    }
};
#endif //CPPLEETCODE_SINGLE_NUMBER_H
