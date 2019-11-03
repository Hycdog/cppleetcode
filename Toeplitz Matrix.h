//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/toeplitz-matrix/submissions/
 * 无非就是逐个对角线扫描咯 还能如何
 */
#ifndef CPPLEETCODE_TOEPLITZ_MATRIX_H
#define CPPLEETCODE_TOEPLITZ_MATRIX_H
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                if (matrix[i][j] != matrix[i - 1][j - 1])
                    return false;
        return true;
    }
};
#endif //CPPLEETCODE_TOEPLITZ_MATRIX_H
