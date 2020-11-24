//
// Created by Powerhouse on 2020/11/24.
//

#ifndef CPPLEETCODE_ISPALINDROME_H
#define CPPLEETCODE_ISPALINDROME_H

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int buffer=0;
        int original_x = x;
        while(x>0){
            buffer = buffer*10 + x%10;
            x /= 10;
        }
        return original_x == x;
    }
};

#endif //CPPLEETCODE_ISPALINDROME_H
