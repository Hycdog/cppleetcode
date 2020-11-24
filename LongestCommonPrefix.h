//
// Created by Powerhouse on 2020/11/24.
//

/**
 * 分而治之，把问题化作前缀和每个字符串的比较。
 * time o(mn)
 * space o(1)
 */
#include <string>
#ifndef CPPLEETCODE_LONGESTCOMMONPREFIX_H
#define CPPLEETCODE_LONGESTCOMMONPREFIX_H
using namespace  std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int strcnt = strs.size();
        if(strcnt == 0) return "";
        string prefix = strs[0];
        for(int i=0;i<strcnt;i++){
            lcp(prefix, strs[i]);
        }
        return prefix;
    }

    void lcp(string &prefix, string str){
        int sz = prefix.size();
        for(int i=0;i<sz;i++){
            if(prefix[i] != str[i]){
                prefix = prefix.substr(0, i);
                return;
            }
        }
    }
};
#endif //CPPLEETCODE_LONGESTCOMMONPREFIX_H
