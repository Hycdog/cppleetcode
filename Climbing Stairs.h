//
// Created by hu on 1/9/19.
//

/**
 * 一步两步，一步两步
 * 可以拿递归做，但没必要，我试过f(n)=f(n-1)+f(n-2) 直接超时不给ac
 * 循环就可以了
 * 这个代码是我自己写的 帅不帅
 */
#ifndef CPPLEETCODE_CLIMBING_STAIRS_H
#define CPPLEETCODE_CLIMBING_STAIRS_H
class Solution {
public:
    int climbStairs(int n) {
        int first=1;
        int second=1;
        for(int i=1;i<n;i+=2)
            second+=first+=second;
        return n%2?second:first;
    }
};
#endif //CPPLEETCODE_CLIMBING_STAIRS_H
