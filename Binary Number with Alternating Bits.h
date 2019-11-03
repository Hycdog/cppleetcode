//
// Created by hu on 19-1-20.
//

/**
 * https://leetcode.com/problems/binary-number-with-alternating-bits/submissions/
 * 我一开始的想法很简单：用两个mask
 * 但是 如4这样的数：0100
 * 两个0在一起，不算相邻的bit不同
 * 所以……我的算法就废了
 * pochmann大神给的算法
    000101010
  ^ 000001010
  = 000100000

    000101000
  ^ 000001010
  = 000100010

    000000100
  ^ 000000001
  = 000000101

  除以4，发现如果是相邻bit不一样的，那么xor结果就是只有开头一个1
 */
bool hasAlternatingBits(int n) {
    int maskA = 0x55555555;
    int maskB = 0xAAAAAAAA;
    return ((n&maskA)&&!(n&maskB)) || ((n&maskB)&&!(n&maskA));
}

#ifndef CPPLEETCODE_BINARY_NUMBER_WITH_ALTERNATING_BITS_H
#define CPPLEETCODE_BINARY_NUMBER_WITH_ALTERNATING_BITS_H

class Solution {
public:
    bool hasAlternatingBits(int n) {
        return !((n ^= n>>2) & n-1);
    }
};
#endif //CPPLEETCODE_BINARY_NUMBER_WITH_ALTERNATING_BITS_H
