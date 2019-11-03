//
// Created by hu on 1/8/19.
//

/**
 *https://leetcode.com/problems/rotate-image/discuss/18872/A-common-method-to-rotate-the-image
 *
 * clockwise rotate
 * first reverse up to down, then swap the symmetry
 * 1 2 3     7 8 9     7 4 1
 * 4 5 6  => 4 5 6  => 8 5 2
 * 7 8 9     1 2 3     9 6 3
 * 其实这种做法还是挺讨巧的，因为题目里的矩阵是n*n，也就是长和宽相同
 * 所以只需要swap就可以了。但如果遇到长和宽不同的矩阵，这样做就不行了。
 *
 *
 */

#ifndef CPPLEETCODE_ROTATE_IMAGE_H
#define CPPLEETCODE_ROTATE_IMAGE_H
class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        reverse(matrix.begin(), matrix.end());
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = i + 1; j < matrix[i].size(); ++j)
                swap(matrix[i][j], matrix[j][i]);
        }
    }
};
#endif //CPPLEETCODE_ROTATE_IMAGE_H
