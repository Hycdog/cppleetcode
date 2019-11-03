//
// Created by hu on 19-1-21.
//
/**
 * https://leetcode.com/problems/verifying-an-alien-dictionary/submissions/
 * 实际上只要map就可以了
 */
#ifndef CPPLEETCODE_VERIFYING_AN_ALIEN_DICTIONARY_H
#define CPPLEETCODE_VERIFYING_AN_ALIEN_DICTIONARY_H
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int mapping[26];
        for (int i = 0; i < 26; i++)
            mapping[order[i] - 'a'] = i;
        for (string &w : words)
            for (char &c : w)
                c = mapping[c - 'a'];
        return is_sorted(words.begin(), words.end());
    }
};
#endif //CPPLEETCODE_VERIFYING_AN_ALIEN_DICTIONARY_H
