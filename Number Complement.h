//
// Created by hu on 19-1-16.
//
/**
 * https://leetcode.com/problems/number-complement/submissions/
 * 输入：5 00000101
 * 返回：2 00000010
 *
 * ~5：11111010
 * 所以目标就是找一个
 * mask：00000111
 * 然后和~5 做 &
 * 这个mask怎么找呢？
 * 不妨先设mask为11111111
 * 然后和num做& 左移位
 * 只有当num最前面一个1 & mask中最高位0时
 * ~mask才会成为00000111
 * 最后结果就是~mask & ~num
 * 也可以是 mask ^ ~num
 */
#ifndef CPPLEETCODE_NUMBER_COMPLEMENT_H
#define CPPLEETCODE_NUMBER_COMPLEMENT_H
class Solution {
public:
    int findComplement(int num) {
        int mask = ~0;
        while (num & mask) mask <<= 1;
        return mask ^ ~num;
    }
};
#endif //CPPLEETCODE_NUMBER_COMPLEMENT_H
