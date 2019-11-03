//
// Created by hu on 1/8/19.
//
/**
 * https://leetcode.com/problems/missing-number/
 * 又是bit manipulation……这次还是XOR
 * A^B^A=A
 */
#ifndef CPPLEETCODE_MISSING_NUMBER_H
#define CPPLEETCODE_MISSING_NUMBER_H
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        int i=0;
        for(int num:nums){
            result ^= num^i;
            i++;
        }
        return result;
    }
};
#endif //CPPLEETCODE_MISSING_NUMBER_H
