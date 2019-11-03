//
// Created by hu on 19-1-14.
//

/**
 * https://leetcode.com/problems/battleships-in-a-board/submissions/
 * 不管它是横的还是竖的，只要数一头就可以了！还要判断是不是在边上
 * 因为题目保证了不会有歧义，所以不用考虑特殊情况。
 */
#ifndef CPPLEETCODE_BATTLESHIPS_IN_A_BOARD_H
#define CPPLEETCODE_BATTLESHIPS_IN_A_BOARD_H

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) { return 0; }
        int m = board.size(), n = board[0].size(), cnt = 0;

        for (int r = 0; r < m; r++)
            for (int c = 0; c < n; c++)
                cnt += board[r][c] == 'X' && (r == 0 || board[r - 1][c] != 'X') && (c == 0 || board[r][c - 1] != 'X');
        return cnt;
    }
};

int static fast = [](){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); return 0;
}();


#endif //CPPLEETCODE_BATTLESHIPS_IN_A_BOARD_H
