//
// Created by hu on 1/9/19.
//

/**
 * https://leetcode.com/problems/valid-sudoku/
 * 判断sudoku棋盘是不是合法
 * 条件就是三个，两个循环加一个used
 * 常规做法
 * 目前没有看到特别变态的做法
 */
#ifndef CPPLEETCODE_VALID_SUDOKU_H
#define CPPLEETCODE_VALID_SUDOKU_H
class Solution
{
public:
    bool isValidSudoku(vector<vector<char> > &board)
    {
        int used1[9][9] = {0}, used2[9][9] = {0}, used3[9][9] = {0};

        for(int i = 0; i < board.size(); ++ i)
            for(int j = 0; j < board[i].size(); ++ j)
                if(board[i][j] != '.')
                {
                    int num = board[i][j] - '0' - 1, k = i / 3 * 3 + j / 3;
                    if(used1[i][num] || used2[j][num] || used3[k][num])
                        return false;
                    used1[i][num] = used2[j][num] = used3[k][num] = 1;
                }

        return true;
    }
};
#endif //CPPLEETCODE_VALID_SUDOKU_H
