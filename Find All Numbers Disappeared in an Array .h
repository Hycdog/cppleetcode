//
// Created by hu on 19-1-14.
//

/**
 * https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/
 * 我的想法很简单，就是两次遍历，然后桶排，时间复杂度也还不错的
 *
 */
#ifndef CPPLEETCODE_FIND_ALL_NUMBERS_DISAPPEARED_IN_AN_ARRAY_H
#define CPPLEETCODE_FIND_ALL_NUMBERS_DISAPPEARED_IN_AN_ARRAY_H
//my code:
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        if(!nums.size()){
            return nums;
        }
        vector<int>res;
        int* buckets = new int[nums.size()]{0};
        for(int i:nums){
            buckets[i-1]++;
        }
        for(int i=0;i<nums.size();i++){
            if(!buckets[i]){
                res.push_back(i+1);
            }
        }
        return res;

    }
};

/** 网上还有一种版本，空间是o(1)。缺点：修改原vector
 *  原理：直接删下标。然后剩下的下标就是缺的数字了
 */
class Solution2 {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        for(int i=0; i<len; i++) {
            int m = abs(nums[i])-1; // index start from 0
            nums[m] = nums[m]>0 ? -nums[m] : nums[m];
        }
        vector<int> res;
        for(int i = 0; i<len; i++) {
            if(nums[i] > 0) res.push_back(i+1);
        }
        return res;
    }
};
#endif //CPPLEETCODE_FIND_ALL_NUMBERS_DISAPPEARED_IN_AN_ARRAY_H
