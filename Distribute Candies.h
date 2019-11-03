//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/distribute-candies/submissions/
 * 看了半天，还是这个答案最合理
 * distribute只取决于种类(unordered_set::size())
 * 和数量c.size()/2
 * 也有用bitset做的，但是看到bitset<200001>……
 * 20万个bit真的比unordered_set快吗 我不觉得
 * 而且空间占太多了 没有实用性
 *
 */
#ifndef CPPLEETCODE_DISTRIBUTE_CANDIES_H
#define CPPLEETCODE_DISTRIBUTE_CANDIES_H
class Solution {
public:
    int distributeCandies(vector<int>& c) {
        return min(unordered_set<int>(begin(c), end(c)).size(), c.size() / 2);
    }
};
#endif //CPPLEETCODE_DISTRIBUTE_CANDIES_H
