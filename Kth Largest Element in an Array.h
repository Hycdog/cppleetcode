//
// Created by hu on 1/9/19.
//

/**
 *https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/
 * 直接用priority_queue，最大堆，是最容易想到的。
 */
#ifndef CPPLEETCODE_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H
#define CPPLEETCODE_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        for (int i = 0; i < k - 1; i++) {
            pq.pop();
        }
        return pq.top();
    }
};

#endif //CPPLEETCODE_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H
