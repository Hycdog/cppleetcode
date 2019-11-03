//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/validate-stack-sequences/submissions/
 * 我想得太多了
 * 其实就是这么简单：每push一个，看看能pop掉多少个
 * 最后看看s是否为空就行了
 */
#ifndef CPPLEETCODE_VALIDATE_STACK_SEQUENCES_H
#define CPPLEETCODE_VALIDATE_STACK_SEQUENCES_H
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int i = 0;
        for (int x : pushed) {
            s.push(x);
            while (s.size() && s.top() == popped[i]) {
                s.pop();
                i++;
            }
        }
        return !s.size();
    }
};
#endif //CPPLEETCODE_VALIDATE_STACK_SEQUENCES_H
