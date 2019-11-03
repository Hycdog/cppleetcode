//
// Created by hu on 1/7/19.
//

#ifndef CPPLEETCODE_4SUM_II_H
#define CPPLEETCODE_4SUM_II_H
/**
 * https://leetcode.com/problems/4sum-ii/
 * 其实这个问题解法非常多，但是下面这个o(n^2)的解法是最容易理解的
 * 既然要求四个二元列表中相加为0的结果，不妨认为两个两个一组，两组
 * 相加等于0，至于为什么是两个一组，是因为循环的关系,o(n^2)+o(n^2)也比
 * o(n^3)来的好的多。所以不是一个和三个，而是两个两个。具体实现还是很好理解的。
 *
 */
class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int res = 0;
        unordered_map<int, int> AB;
        for (int a : A)
            for (int b : B)
                AB[a + b]++;
        for (int c : C)
            for (int d : D)
                res += AB[-c - d];
        return res;
    }
};
#endif //CPPLEETCODE_4SUM_II_H
