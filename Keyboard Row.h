//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/keyboard-row/submissions/
 * 这个解答不是最简单的，但是我很喜欢
 * dict+map的方法人人都能想到。但是怎么才能让map更有效率
 * 三个组,100,010,001
 * 对于每个字符，7&=组号
 * 一旦7为0就break
 * 你，学到了吗？
 */
#ifndef CPPLEETCODE_KEYBOARD_ROW_H
#define CPPLEETCODE_KEYBOARD_ROW_H
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> dict(26);
        vector<string> rows = {"QWERTYUIOP", "ASDFGHJKL", "ZXCVBNM"};
        for (int i = 0; i < rows.size(); i++) {
            for (auto c : rows[i]) dict[c-'A'] = 1 << i;
        }
        vector<string> res;
        for (auto w : words) {
            int r = 7;
            for (char c : w) {
                r &= dict[toupper(c)-'A'];
                if (r == 0) break;
            }
            if (r) res.push_back(w);
        }
        return res;
    }
};
#endif //CPPLEETCODE_KEYBOARD_ROW_H
