//
// Created by hu on 1/9/19.
//

/**
 *
 * 用unordered_map很容易想到，但是没想到second()是vector..学到了学到了
 * 而且骚就骚在用了auto和引用地址两种引用方式
 * 一道看似简单的题目，要写出漂亮的代码也不简单啊！
 */
#ifndef CPPLEETCODE_GROUP_ANAGRAMS_H
#define CPPLEETCODE_GROUP_ANAGRAMS_H

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> count;
        int i = 0;
        for (auto s : strs)
        {
            sort(s.begin(), s.end());
            count[s].push_back(strs[i++]);
        }
        vector<vector<string>> res;
        for (auto n : count){
            res.push_back(n.second);
        }
        return res;
    }
};

#endif //CPPLEETCODE_GROUP_ANAGRAMS_H
