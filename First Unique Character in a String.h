//
// Created by hu on 1/7/19.
//

/**
 * 下面这个答案是我自己想的，答案有不少人用unordered_map等等，这些都很容易想。
 * 但是，我觉得map这个东西，虽然理论性能是o(1)，但是实际根本做不到o(1)
 * 所以试试看用bitset呢？毕竟只要判断是不是重复，不需要判断重复了几次。
 * 所以就判断是否exist，然后判断是否repeat，最后两个与非一下，返回。
 *
 */
#ifndef CPPLEETCODE_FIRST_UNIQUE_CHARACTER_IN_A_STRING_H
#define CPPLEETCODE_FIRST_UNIQUE_CHARACTER_IN_A_STRING_H

static int speedup=[](){
    ios_base::sync_with_stdio(false);
    return 0;
}();
class Solution {
public:
    int firstUniqChar(string s) {
        bitset<26> exist;
        bitset<26> repeat;
        for(auto i:s){
            exist[i-97]?repeat.set(i-97):exist.set(i-97);
        }
        for(int i=0;i<s.length();i++){
            if(exist[s[i]-97] && !repeat[s[i]-97])return i;
        }
        return -1;
    }


#endif //CPPLEETCODE_FIRST_UNIQUE_CHARACTER_IN_A_STRING_H
