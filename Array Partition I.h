//
// Created by hu on 1/7/19.
//

#ifndef CPPLEETCODE_ARRAY_PARTITION_I_H
#define CPPLEETCODE_ARRAY_PARTITION_I_H

/**
 * https://leetcode.com/problems/array-partition-i/
 * 乍一看，这个题目有点难有木有！又是pair又是min又是max的，但
 * 看到解答的那一刻我真的傻了，居然那么简单！
 * 就是把从小到大排列的奇数项加起来，就行了。
 *看见讨论区的大神，https://leetcode.com/problems/array-partition-i/discuss/102170/Java-Solution-Sorting.-And-rough-proof-of-algorithm.
 * 一切都很清晰了。数学确实能拯救你的代码！
 */
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < nums.size(); i += 2) {ans += nums[i]; }
        return ans;
    }
};

#endif //CPPLEETCODE_ARRAY_PARTITION_I_H
