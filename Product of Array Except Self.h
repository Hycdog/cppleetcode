//
// Created by hu on 1/3/19.
//
/**
 *
 * 这段代码的精髓在于充分利用了那一个for循环，干完了所有的事情。
 * 一个数组，除了这个元素外所有元素的乘积=左边所有元素乘积*右边所有元素乘积
 * 然后，这个时候由于循环是分几次做的，其实不用同时算左和右，计算1号元素的左的同时
 * 也计算n-2号元素的右，这样就把结果保存下来避免重复计算。
 */
#ifndef CPPLEETCODE_PRODUCT_OF_ARRAY_EXCEPT_SELF_H
#define CPPLEETCODE_PRODUCT_OF_ARRAY_EXCEPT_SELF_H

#include <vector>
using namespace std;
class Solution {
public:
    /**
     *
     * @param nums a non-empty array of integers
     * @return for each integer in the array, replace it with the product of all the remaining integers
     */
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> rs(n, 1);
        int fromLeft = 1, fromRight = 1;
        for (int i = 0; i < n; i++) {
            rs[i] *= fromLeft;
            fromLeft *= nums[i];
            rs[n-1-i] *= fromRight;
            fromRight *= nums[n-1-i];
        }
        return rs;
    }

};
#endif //CPPLEETCODE_PRODUCT_OF_ARRAY_EXCEPT_SELF_H
