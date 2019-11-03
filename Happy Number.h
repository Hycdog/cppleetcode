//
// Created by hu on 1/9/19.
//

/**
 * 写这个算法的也是个牛人……其实里面的while不难想，
 * 难得是中止循环的条件，为什么是n>6？据大神说因为2～6都不是Happy Number
 * 其实这个条件可以更复杂，但没必要
 *  具体的mathematical解释在https://leetcode.com/problems/happy-number/discuss/56919/Explanation-of-why-those-posted-algorithms-are-mathematically-valid
 *
 */
#ifndef CPPLEETCODE_HAPPY_NUMBER_H
#define CPPLEETCODE_HAPPY_NUMBER_H
class Solution {
public:
    bool isHappy(int n) {
        while(n>6){
            int next = 0;
            while(n){next+=(n%10)*(n%10); n/=10;}
            n = next;
        }
        return n==1;
    }
};
#endif //CPPLEETCODE_HAPPY_NUMBER_H
