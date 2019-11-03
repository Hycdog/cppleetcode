//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/uncommon-words-from-two-sentences/
 * istringstream ftw!
 *
 */
#ifndef CPPLEETCODE_UNCOMMON_WORDS_FROM_TWO_SENTENCES_H
#define CPPLEETCODE_UNCOMMON_WORDS_FROM_TWO_SENTENCES_H
class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string, int> count;
        istringstream iss(A + " " + B);
        while (iss >> A) count[A]++;
        vector<string> res;
        for (pair<string,int> w: count)
            if (w.second == 1)
                res.push_back(w.first);
        return res;
    }
};
#endif //CPPLEETCODE_UNCOMMON_WORDS_FROM_TWO_SENTENCES_H
