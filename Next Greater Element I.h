//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/next-greater-element-i/submissions/
 * 这个题看上去不难，但实际上还是要一点trick的
 * unordered_map 存 nextGreaterElement
 * 那么，要如何求呢？用stack就可以了
 * 因为stack相当于把之前的请求都存起来，等发现满足答案的i时，stack再pop()
 *
 */
#ifndef CPPLEETCODE_NEXT_GREATER_ELEMENT_I_H
#define CPPLEETCODE_NEXT_GREATER_ELEMENT_I_H
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};

#endif //CPPLEETCODE_NEXT_GREATER_ELEMENT_I_H
