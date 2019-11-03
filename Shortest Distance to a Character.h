//
// Created by hu on 19-1-15.
//

/**
 * https://leetcode.com/problems/shortest-distance-to-a-character/submissions/
 * 只要正反走两遍就行了。
 * 而且，原po第一个循环里也加了min，其实不需要。第一个只要保证非负就可以了。
 *
 */
#ifndef CPPLEETCODE_SHORTEST_DISTANCE_TO_A_CHARACTER_H
#define CPPLEETCODE_SHORTEST_DISTANCE_TO_A_CHARACTER_H
class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n = S.size();
        vector<int> res(n, n);
        int pos = -n;
        for (int i = 0; i < n; ++i) {
            if (S[i] == C) pos = i;
            res[i] = i-pos;
        }
        pos = n<<1;
        for (int i = n - 1; i >= 0; --i) {
            if (S[i] == C)  pos = i;
            res[i] = min(res[i], pos-i);
        }
        return res;
    }
};
#endif //CPPLEETCODE_SHORTEST_DISTANCE_TO_A_CHARACTER_H
