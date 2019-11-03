//
// Created by hu on 19-1-14.
//

/**
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/
 * 要找到数组中最长的没有重复字符的子序列，该怎么做呢？
 * 首先想到的，肯定是准备好256个桶，因为ASCII码中有256个字符
 * 每个桶都存放着该字符的最后一次出现的位置，初始值为-1，代表没有出现
 * 然后就是遍历数组了。如果说dict[s[i]]>start，也就是s[i]在start之后已经发生了重复
 * 那么就重新把start指到s[i]的桶里存放的最后一次出现的下标。
 * 然后计算maxLen，就是当前下标减去start的值。
 *
 */
#ifndef CPPLEETCODE_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H
#define CPPLEETCODE_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H

#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};
#endif //CPPLEETCODE_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H
