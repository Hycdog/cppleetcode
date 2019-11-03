//
// Created by hu on 1/11/19.
//

/**
 * https://leetcode.com/problems/house-robber/submissions/
 * 这个问题其实就是可以简化为：相邻的元素不能取，问数组中取到元素的最大和
 *
 */
#ifndef CPPLEETCODE_HOUSE_ROBBER_H
#define CPPLEETCODE_HOUSE_ROBBER_H
class Solution {
public:
    int rob(vector<int>& nums) {
        int a = 0;
        int b = 0;

        for (int i=0; i<nums.size(); i++)
        {
            if (i%2==0)
            {
                a = max(a+nums[i], b);
            }
            else
            {
                b = max(a, b+nums[i]);
            }
        }

        return max(a, b);
    }
};
#endif //CPPLEETCODE_HOUSE_ROBBER_H
