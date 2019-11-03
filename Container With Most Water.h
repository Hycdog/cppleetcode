//
// Created by hu on 1/9/19.
//

/**https://leetcode.com/problems/container-with-most-water/
 * 这道题也是非常有意思，下面的解法也是大神Stefan Pochmann的
 * 其实就是，从两头开始找，然后因为木桶原理，短的那头的高度决定盛水的容量
 * 所以，到最后就是从两头分别开始，短的那头不断地向内，然后判断。
 */
#ifndef CPPLEETCODE_CONTAINER_WITH_MOST_WATER_H
#define CPPLEETCODE_CONTAINER_WITH_MOST_WATER_H
class Solution{
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            int h = min(height[i], height[j]);
            water = max(water, (j - i) * h);
            while (height[i] <= h && i < j) i++;
            while (height[j] <= h && i < j) j--;
        }
        return water;
    }
};

#endif //CPPLEETCODE_CONTAINER_WITH_MOST_WATER_H
