//
// Created by hu on 1/9/19.
//

/**
 * https://leetcode.com/problems/trapping-rain-water/
 * 这个题的解法非常像Container With Most Water
 * 也是两头各一个指针，低的向中间移动，只不过这次是累加，因为
 * 越往中间，水位只可能越高，因为中间一定是大于等于外面的。
 * 所以level = max(level, lower)，level不断升高，成为新的水平面
 * lower就是新水平面下一个块，等于是从左往右一格一格地往上加水的。
 */
#ifndef CPPLEETCODE_TRAPPING_RAIN_WATER_H
#define CPPLEETCODE_TRAPPING_RAIN_WATER_H

class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size()-1, level = 0, water = 0;
        while (l < r) {
            int lower = height[height[l] < height[r] ? l++ : r--];
            level = max(level, lower);
            water += level - lower;
        }
        return water;             
    }
};
#endif //CPPLEETCODE_TRAPPING_RAIN_WATER_H
