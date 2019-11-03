//
// Created by hu on 19-1-16.
//
/**
 * https://leetcode.com/problems/custom-sort-string/submissions/
 * 又学到了新东西啦！
 * sort中的lambda表达式，这个已经见过一次了
 * 还有npos
 * static const size_t npos = -1;
 * find(a)找不到时返回string::npos;
 *
 */
#ifndef CPPLEETCODE_CUSTOM_SORT_STRING_H
#define CPPLEETCODE_CUSTOM_SORT_STRING_H
class Solution {
public:
    string customSortString(string S, string T) {
        sort(T.begin(), T.end(),
             [&](char a, char b) {
                 if(S.find(a)!=S.npos||S.find(b)!=S.npos)
                     return S.find(a) < S.find(b);
                 else
                     return a<b;
             });
        return T;
    }
};
#endif //CPPLEETCODE_CUSTOM_SORT_STRING_H
