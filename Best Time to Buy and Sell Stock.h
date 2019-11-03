//
// Created by hu on 1/8/19.
//

/**https://leetcode.com/problems/best-time-to-buy-and-sell-stock/discuss/39038/Kadane's-Algorithm-Since-no-one-has-mentioned-about-this-so-far-%3A)-(In-case-if-interviewer-twists-the-input)
 * Kadane's Algorithm
 *其实这个算法不难理解，主要就是从头开始逐个累加，计算
 * 当前的利润，然后再计算一下max。这跟II里面可以反复买进卖出不同，这道题只能操作一次
 * 所以可以用一下这种算法。
 *
 */
#ifndef CPPLEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_H
#define CPPLEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_H
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxCur = 0, maxSoFar = 0;
        for(int i = 1; i < prices.size(); i++) {
            maxCur = max(0, maxCur += prices[i] - prices[i-1]);
            maxSoFar = max(maxCur, maxSoFar);
        }
        return maxSoFar;
    }

};
#endif //CPPLEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_H
