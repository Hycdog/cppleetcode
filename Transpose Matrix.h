//
// Created by hu on 19-1-15.
//
/**
 * https://leetcode.com/problems/transpose-matrix/
 * 这个解法没啥好说的吧！
 *
 */
#ifndef CPPLEETCODE_TRANSPOSE_MATRIX_H
#define CPPLEETCODE_TRANSPOSE_MATRIX_H
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>> A) {
        int M = A.size(), N = A[0].size();
        vector<vector<int>> B(N, vector<int>(M, 0));
        for (int j = 0; j < N; j++)
            for (int i = 0; i < M; i++)
                B[j][i] = A[i][j];
        return B;
    }

};
/** python 一行搞定：
 * class Solution(object):
    def transpose(self, A):
        return zip(*A)
 */
#endif //CPPLEETCODE_TRANSPOSE_MATRIX_H
