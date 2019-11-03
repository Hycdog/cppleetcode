//
// Created by hu on 19-1-16.
//
/**
 * https://leetcode.com/problems/reshape-the-matrix/submissions/
 * Runtime: 32 ms, faster than 100.00% of C++ online submissions for Reshape the Matrix.
 * 全服最快，有木有～
 * 其实算法一点也不复杂，就是一个个赋值
 * o(r*c)
 *
 */
#ifndef CPPLEETCODE_RESHAPE_THE_MATRIX_H
#define CPPLEETCODE_RESHAPE_THE_MATRIX_H
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int sze = r*c;
        if(r*c!=nums.size()*nums[0].size()) return nums;
        vector<vector<int>> res(r,vector<int>(c,0));
        for(int i=0;i<sze;i++){
            res[i/c][i%c] = nums[i/nums[0].size()][i%nums[0].size()];
        }
        return res;
    }
};
#endif //CPPLEETCODE_RESHAPE_THE_MATRIX_H
