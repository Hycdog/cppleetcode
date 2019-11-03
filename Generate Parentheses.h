//
// Created by hu on 1/3/19.
//

/**
 *
 * 这道题是给一个数字n，代表生成多少个括号。
 * 当然，生成的括号左右都要有，而且要合法。
 * 这个题目拿递归解就显得特别干净了：n代表剩下的括号，m代表左右括号之差。
 * 如果递归到n为0就返回。
 */
#ifndef CPPLEETCODE_GENERATE_PARENTHESES_H
#define CPPLEETCODE_GENERATE_PARENTHESES_H

#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    /**
     *
     * @param n number of parentheses
     * @return possible permutations
     */
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        addingpar(res, "", n, 0);
        return res;
    }
    /**
     *
     * @param v vector filled with possible permutations
     * @param str string containing parentheses constructed by the recursive function
     * @param n remaining parentheses to be appended to str
     * @param m current count of '(' - count of ')'
     */
    void addingpar(vector<string> &v, string str, int n, int m){
        if(n==0 && m==0) {
            v.push_back(str);
            return;
        }
        if(m > 0){ addingpar(v, str+")", n, m-1); } // if m>0 ,')' can be appended, and the parentheses will still be well-formed
        if(n > 0){ addingpar(v, str+"(", n-1, m+1); }// if n>0, '(' can be appended
    }
};
#endif //CPPLEETCODE_GENERATE_PARENTHESES_H
