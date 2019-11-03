//
// Created by hu on 19-1-15.
//

/**
 * https://leetcode.com/problems/counting-bits/
 * 刚开始看到这个算法时，我还是愣了好久……虽然我知道i&(i-1)的作用是去掉i的二进制数的最后一个1
 * 这里的意义在于：重复利用，不用每个数都数
 * 利用上一次计算的结果
 * 比如14的二进制
 * 00000000 00000000 00000000 000001110
 * 数它有多少个1，其实只需要数14&13
 * 也就是
 * 00000000 00000000 00000000 000001100
 * 也就是12 有多少个1 然后再加1
 * 因为12之前已经算过了，所以只要再加1就行了
 * 不需要再循环、遍历等。而且与运算在计算机里也很快。
 */
#ifndef CPPLEETCODE_COUNTING_BITS_H
#define CPPLEETCODE_COUNTING_BITS_H
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ret(num+1, 0);
        for (int i = 1; i <= num; ++i)
            ret[i] = ret[i&(i-1)] + 1;
        return ret;
    }
};
#endif //CPPLEETCODE_COUNTING_BITS_H
