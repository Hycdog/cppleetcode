//
// Created by hu on 1/8/19.
//

/**
 *
 *https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/
 * 这道题我看下面的大佬普遍用的都是hashmap，这个方法还是非常简便的，我一开始想到的是
 * 用两个map，其实想得太复杂了，只要一个map就够了，第一个数组+第二个数组-，减完还大于0就
 * push。
 */
#ifndef CPPLEETCODE_INTERSECTION_OF_TWO_ARRAYS_II_H
#define CPPLEETCODE_INTERSECTION_OF_TWO_ARRAYS_II_H
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
        vector<int>res;
        for(int num:nums1)map1[num]++;
        for(int num:nums2)if(--map1[num]>=0)res.push_back(num);
        return res;
    }
};
#endif //CPPLEETCODE_INTERSECTION_OF_TWO_ARRAYS_II_H
