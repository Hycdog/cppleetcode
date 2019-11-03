//
// Created by hu on 1/9/19.
//
/**
 * https://leetcode.com/problems/power-of-three/
 * 这个解法……非常抖机灵，不过确实适用于有上限，而且是素数的幂
 * 1162261467是小于INT_MAX的最大的3的幂，所以……懂了吧！
 * 当然也有常规做法，取余、log什么的，不过那些都很容易做了
 */
#ifndef CPPLEETCODE_POWER_OF_THREE_H
#define CPPLEETCODE_POWER_OF_THREE_H
class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && (1162261467 % n == 0);
    }
};
#endif //CPPLEETCODE_POWER_OF_THREE_H
