//
// Created by hu on 19-1-17.
//

/**
 * https://leetcode.com/problems/daily-temperatures/
 * stack 解法很像Next Greater Element I
 *
 */
#ifndef CPPLEETCODE_DAILY_TEMPERATURES_H
#define CPPLEETCODE_DAILY_TEMPERATURES_H
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> s;
        vector<int> dt(T.size(),0);
        for(int i=0;i<T.size();i++){
            while(s.size() && T[s.top()]<T[i]){
                dt[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }
        return dt;
    }
};
#endif //CPPLEETCODE_DAILY_TEMPERATURES_H
