//
// Created by hu on 1/7/19.
//

/**
 * 这个算法是我看runtime里面最快的，但是暂时还没看懂……
 * 只能大概猜出作者是想用二分法，然后找那个元素，具体原理我还没想明白
 */
#ifndef CPPLEETCODE_KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX_H
#define CPPLEETCODE_KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX_H

#include <iostream>

int x = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
    // Count #elements <= x.
    int F(const vector<vector<int>>& matrix, int x) {
        //number of rows inside the matrix
        int m = matrix.size();
        //number of columns inside the matrix
        int n = matrix[0].size();
        int i = 0, j = n - 1;
        int count = 0;
        while (i < m && j >= 0) {
            if (matrix[i][j] <= x) {
                count += j + 1;
                ++i;
            } else {
                --j;
            }
        }
        return count;
    }
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int lo = matrix[0][0];
        int hi = matrix.back().back();
        // Find std::lower_bound(first, last, k).
        while (lo < hi) {
            int mid = (hi - lo) / 2 + lo; // Don't overflow
            if (F(matrix, mid) < k) lo = mid + 1;
            else hi = mid;
        }
        return lo;
    }
};

#endif //CPPLEETCODE_KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX_H
