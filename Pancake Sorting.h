//
// Created by hu on 19-1-15.
//

/**
 * https://leetcode.com/problems/pancake-sorting/
 * pancake sort 最容易想到的就是模拟冒泡排序了
 * 每一次都把最大的翻到第一个，然后再翻到底下去。
 * 中间加了两个判断，因为答案中有许多翻第一个的情况，虽然不影响正确性
 * 但是是可以去掉的。
 */
#ifndef CPPLEETCODE_PANCAKE_SORTING_H
#define CPPLEETCODE_PANCAKE_SORTING_H
class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> result;
        for(int i = 0;i < A.size()-1;i++){
            auto maxPosition = max_element(A.begin(), A.end() - i);
            if(maxPosition!=A.begin())
                result.push_back(maxPosition  - A.begin() + 1);
            result.push_back(A.size() - i);
            if(maxPosition!=A.begin())
                reverse(A.begin(),maxPosition+1);
            reverse(A.begin(),A.end() - i);
        }
        return result;
    }
};
#endif //CPPLEETCODE_PANCAKE_SORTING_H
