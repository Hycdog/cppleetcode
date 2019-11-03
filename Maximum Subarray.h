//
// Created by hu on 1/9/19.
//

/**
 * 看了评论才知道，原来这种方法叫dp……
 * 其实这道题和之前那个Best Time to Buy and Sell Stock非常像
 * 都是用两个max解决问题。
 * 一个MaxSofar，代表当前的最大子序列，
 * 一个Max，代表全局最大子序列
 *
 */
#ifndef CPPLEETCODE_MAXIMUM_SUBARRAY_H
#define CPPLEETCODE_MAXIMUM_SUBARRAY_H

#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max=nums[0];
        int MaxSofar=nums[0];
        for(int i=1;i<nums.size();i++){
            MaxSofar=max(nums[i],nums[i]+MaxSofar);
            Max=max(Max,MaxSofar);
        }
        return Max;
    }
};
#endif //CPPLEETCODE_MAXIMUM_SUBARRAY_H
