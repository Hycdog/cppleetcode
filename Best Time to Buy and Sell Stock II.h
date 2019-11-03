//
// Created by hu on 1/7/19.
//

#ifndef CPPLEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_H
#define CPPLEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_H
/**
 * 怎么说呢，这个题目实在有点trivial，不想多说了，应该很好理解
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)return 0;
        int min=prices[0];
        int prof=0;
        for(auto it:prices){
            if(it>min)prof+=(it-min);
            min = it;
        }
        return prof;
    }
};

#endif //CPPLEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_H
