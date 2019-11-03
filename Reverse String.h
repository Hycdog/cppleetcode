//
// Created by hu on 1/3/19.
//

/**
 * 除了这个办法，还有别的办法吗。。。我想不到
 */
#ifndef CPPLEETCODE_REVERSE_STRING_H
#define CPPLEETCODE_REVERSE_STRING_H

#include <string>
using namespace std;
class Solution {
public:
    /**
     * Write a function that takes a string as input and returns the string reversed.
     * @param s string input
     * @return string reversed.
     */
    string reverseString(string s) {
        int q = s.length();
        char buffer;
        for(int i=0;i<q/2;i++){
            buffer = s[i];
            s[i] = s[q-i-1];
            s[q-i-1] = buffer;
        }
        return s;
    }
};
#endif //CPPLEETCODE_REVERSE_STRING_H
