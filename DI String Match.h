//
// Created by hu on 1/2/19.
//
/**
 * D代表Decrease
 * I代表Increase
 * 这道题的意思是给你若干个I、若干个D的排列，要你返回一个长度和DI排列一样的数组，
 * 里面的数字也是0~DI长度-1，满足题目给的升降。
 * 但其实看了下面的解答，实际上题目没有要求别的，只要求相邻元素的大小关系。所以不妨
 * 令low = 0,high = S.length()，需要上升就返回low++;
 * 需要下降就返回h--;
 *
 */
#ifndef CPPLEETCODE_DI_STRING_MATCH_H
#define CPPLEETCODE_DI_STRING_MATCH_H

#include <vector>
#include <string>
using namespace std;

vector<int> diStringMatch(string S) {
    vector<int> res;
    for (int l = 0, h = S.size(), i = 0; i <= S.size(); ++i)
        res.push_back(S[i] == 'I' ? l++ : h--);
    return res;
}

#endif //CPPLEETCODE_DI_STRING_MATCH_H
