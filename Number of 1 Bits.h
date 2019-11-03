//
// Created by hu on 1/9/19.
//

/**https://leetcode.com/problems/number-of-1-bits/
 * again,mathematical!
 * n&n-1 的作用，就是去掉n这个数的从右往左第一个1.
 * 一直到n没有1
 * 所以这个算法，是o(m)，m就是1的个数！实在太吊了有木有
 */
#ifndef CPPLEETCODE_NUMBER_OF_1_BITS_H
#define CPPLEETCODE_NUMBER_OF_1_BITS_H

#include <cstdint>

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        while (n) {
            n &= (n - 1);
            count++;
        }

        return count;
    }
};
#endif //CPPLEETCODE_NUMBER_OF_1_BITS_H
