//
// Created by hu on 1/8/19.
//

/**
 * 这道题我想到了要用dps做，但没想到可以那么简单
 * 原因很简单：只能向下或者向右，那么就可以把起点设置在右边一格，这样就变成了path[i-1][j]
 * 同理，向下走也就相当于把起点设置在下边一格
 * 当然，看评论区也有直接用math解决的，
 */
#ifndef CPPLEETCODE_UNIQUE_PATHS_H
#define CPPLEETCODE_UNIQUE_PATHS_H

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int> > path(m, vector<int> (n, 1));
        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                path[i][j] = path[i - 1][j] + path[i][j - 1];
        return path[m - 1][n - 1];
    }
};

#endif //CPPLEETCODE_UNIQUE_PATHS_H
