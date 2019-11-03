//
// Created by hu on 1/7/19.
//

/**
 * 罗马数字转成integer
 * 下面的做法是：倒着来，从右往左（因为一般罗马数字最右边的位上数字是最大的）
 * 依次扫描，左>右就+左
 * 左<右就-左
 * 然后就搞定辣！
 *
 */
#ifndef CPPLEETCODE_ROMAN_TO_INTEGER_H
#define CPPLEETCODE_ROMAN_TO_INTEGER_H

#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> T = { { 'I' , 1 },
                                       { 'V' , 5 },
                                       { 'X' , 10 },
                                       { 'L' , 50 },
                                       { 'C' , 100 },
                                       { 'D' , 500 },
                                       { 'M' , 1000 } };
        int sum = T[s.back()];
        for (int i = s.length() - 2; i >= 0; --i)
        {
            if (T[s[i]] < T[s[i + 1]])
            {
                sum -= T[s[i]];
            }
            else
            {
                sum += T[s[i]];
            }
        }
        return sum;
    }
};

#endif //CPPLEETCODE_ROMAN_TO_INTEGER_H
