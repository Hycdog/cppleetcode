//
// Created by hu on 1/9/19.
//
/**
 * 其实Pascal's Triangle 可以有很多种方法，但是返回值要求用vector
 * vector不能pop_front所以没有队列那么方便，下面这种方法就很聪明：
 * 先初始化一个形状一样，全是1的三角
 * 然后每一行再加上一行的两个数
 */
#ifndef CPPLEETCODE_PASCAL_S_TRIANGLE_H
#define CPPLEETCODE_PASCAL_S_TRIANGLE_H
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=0;i<numRows;++i)
        {
            res.push_back(vector<int>(i+1,1));
            for(auto j=1; j<i; ++j) res[i][j] = res[i-1][j-1] + res[i-1][j];
        }
        return res;
    }
};
#endif //CPPLEETCODE_PASCAL_S_TRIANGLE_H
