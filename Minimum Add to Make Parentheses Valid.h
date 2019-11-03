//
// Created by hu on 1/2/19.
//

/**
 * 这道题很简单吧！我看他们大佬的解答也是o(n)的，基本上就是这个思路
 */
#ifndef CPPLEETCODE_MINIMUM_ADD_TO_MAKE_PARENTHESES_VALID_H
#define CPPLEETCODE_MINIMUM_ADD_TO_MAKE_PARENTHESES_VALID_H

#include <string>
using namespace std;
int minAddToMakeValid(string S) {
    int stack_l=0;
    int req=0;
    for(auto i : S){
        if(S[i]=='('){
            stack_l++;
        }
        else if(S[i]==')'){
            if(stack_l<=0){
                req++;
            }
            else{
                stack_l--;
            }
        }
    }
    req += stack_l;
    return req;
}

#endif //CPPLEETCODE_MINIMUM_ADD_TO_MAKE_PARENTHESES_VALID_H
