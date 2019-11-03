//
// Created by hu on 1/7/19.
//
/**
 * anagram就是变位词,比如radeon和adreno
 * 组成的字符一样，但是排列不一样
 * 其实方法很多，我第一个想到的还是桶排，就是第二个……有点暴力，不过效率还好 ^_^
 * 第一个其实也是桶排，只不过他用的是数组。
 */
#ifndef CPPLEETCODE_VALID_ANAGRAM_H
#define CPPLEETCODE_VALID_ANAGRAM_H

class Solution {
public:
    bool isAnagram(string s, string t) {
        int alp[26]={};
        for (int i = 0; i < s.length(); i++)
            alp[s.at(i) - 'a']++;
        for (int i = 0; i < t.length(); i++)
            alp[t.at(i) - 'a']--;
        for (int i=0;i<26;i++)
            if (alp[i] != 0)
                return false;
        return true;
    }
};

class Solution2 {
public:
    bool isAnagram(string s, string t) {
        string bucket1 = "00000000000000000000000000";
        string bucket2 = "00000000000000000000000000";
        for (int i = 0; i < s.length(); i++)
            bucket1[s.at(i) - 'a']++;
        for (int i = 0; i < t.length(); i++)
            bucket2[t.at(i) - 'a']++;
        return ((bucket1)==(bucket2));
    }
};
#endif //CPPLEETCODE_VALID_ANAGRAM_H
