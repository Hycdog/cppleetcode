//
// Created by hu on 1/10/19.
//

/**https://leetcode.com/problems/sort-colors/
 * 这种算法看上去很简洁，但貌似时间复杂度不是很好的样子……
 * 应该就是个高端版的冒泡排序
 */
#ifndef CPPLEETCODE_SORT_COLORS_H
#define CPPLEETCODE_SORT_COLORS_H

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int second=nums.size()-1, zero=0;
        for (int i=0; i<=second; i++) {
            while (nums[i]==2 && i<second) swap(nums[i], nums[second--]);
            while (nums[i]==0 && i>zero) swap(nums[i], nums[zero++]);
        }
    }
};
#endif //CPPLEETCODE_SORT_       COLORS_H
