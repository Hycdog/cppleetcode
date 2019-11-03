//
// Created by hu on 1/3/19.
//
/**
 * 给定一个数组，把0都扔到最后，其他元素相对位置不变。
 * 我想到的就是，一旦遇到0，就拿后面step位置的元素把它覆盖掉，
 * 然后move++
 * 但是要考虑边界的问题，不然来个全是0的数组step就到外面去了。
 *
 */
#ifndef CPPLEETCODE_MOVE_ZEROES_H
#define CPPLEETCODE_MOVE_ZEROES_H

#include <vector>
using namespace std;
class Solution {
public:
    /**
     *
     * @param nums Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
     */
    void moveZeroes(vector<int>& nums) {
        int sze = nums.size();
        int tsze = nums.size();
        int move = 0;
        for(int i=0;i<tsze;i++){
            while(nums[i+move]==0&&(i+move)<sze){move++;tsze--;}
            nums[i] = nums[i+move];
        }
        for(int i=tsze;i<sze;i++){
            nums[i] = 0;
        }
    }
};
#endif //CPPLEETCODE_MOVE_ZEROES_H
