//
// Created by hu on 19-1-15.
//
/**
 * https://leetcode.com/problems/smallest-range-i/submissions/
 * trivial
 */
#ifndef CPPLEETCODE_SMALLER_RANGE_I_H
#define CPPLEETCODE_SMALLER_RANGE_I_H
class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int maximum = *max_element(A.begin(),A.end());
        int minimum = *min_element(A.begin(),A.end());
        return maximum-minimum>2*K?(maximum-minimum-2*K):0;
    }
};
#endif //CPPLEETCODE_SMALLER_RANGE_I_H
