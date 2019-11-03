//
// Created by hu on 1/7/19.
//


/**
 * 这道题有种似曾相识的感觉，好像某w同学问过我。。
 * 其实就是个26进制的数字来看就好了。A_Z对应1_26
 * 不过有点特殊，因为excel不存在第0列，所以是从1开始的。
 * 下面的这个解答没有用pow，效率快了很多。原理就是每计算一位让结果*26，这样最早进来的
 * （也就是最高位）是乘的最多的，这样递归乘效率比pow快了不少。
 */
#ifndef CPPLEETCODE_EXCEL_SHEET_COLUMN_NUMBER_H
#define CPPLEETCODE_EXCEL_SHEET_COLUMN_NUMBER_H

#include <string>
#include <iostream>
static const auto speedup = []() { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0; }();
class Solution {
public:
    int titleToNumber(string s) {
        unsigned int result=0;
        for(int i=0;i<s.length();i++){
            result=result*26+(s[i]-64);
        }
        return result;
    }
};
#endif //CPPLEETCODE_EXCEL_SHEET_COLUMN_NUMBER_H
