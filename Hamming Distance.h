//
// Created by hu on 1/2/19.
//

/**
 *
 * 所谓hammingdistance
 * 就是求两个int有多少二进制位不一样。
 * x^y，然后判断1的个数。
 */
#ifndef CPPLEETCODE_HAMMING_DISTANCE_H
#define CPPLEETCODE_HAMMING_DISTANCE_H

#include "bitset"
int HammingDistance(int &x,int &y)
{
    return std::bitset<32>(x^y).count();
}
#endif //CPPLEETCODE_HAMMING_DISTANCE_H
