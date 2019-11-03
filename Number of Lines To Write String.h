//
// Created by hu on 19-1-15.
//

/**
 * https://leetcode.com/problems/number-of-lines-to-write-string/
 * 讲道理，vector还可以这么玩...
 * 返回大括号，可以哦！
 *
 */
#ifndef CPPLEETCODE_NUMBER_OF_LINES_TO_WRITE_STRING_H
#define CPPLEETCODE_NUMBER_OF_LINES_TO_WRITE_STRING_H
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int lines = 1, cursor = 0;
        for (char c : S) {
            int width = widths[c - 'a'];
            lines = cursor + width > 100 ? lines + 1 : lines;
            cursor = cursor + width > 100 ? width : cursor + width;
        }
        return {lines, cursor};
    }
};
#endif //CPPLEETCODE_NUMBER_OF_LINES_TO_WRITE_STRING_H
