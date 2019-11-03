//
// Created by hu on 1/6/19.
//
/**
 * 计算：A+B
 * 但是！不许用加号！不许耍赖！
 * 好吧……carry是a与b
 * 每一位的sum是a^b
 * 下面这个代码其实是并行运算，同时算多位的
 */
#ifndef CPPLEETCODE_SUM_OF_TWO_INTEGERS_H
#define CPPLEETCODE_SUM_OF_TWO_INTEGERS_H

class Solution {
public:
    int getSum(int a, int b) {
        int carry;
        while(b)
        {
            cout<<a<<" "<<b<<endl;
            carry  = a & b;
            a = a ^ b;
            cout<<a<<" "<<b<<endl;
            b = carry<<1;
            cout<<a<<" "<<b<<endl;

        }

        return a;
    }
};

#endif //CPPLEETCODE_SUM_OF_TWO_INTEGERS_H
