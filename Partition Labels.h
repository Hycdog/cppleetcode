//
// Created by hu on 1/7/19.
//

/**
 * 这个代码也是抄袭大神的，因为实在想不出了……大神的思路就是，对于string里面的
 * 每一个出现的字母，先用一个循环求它最后出现的那个位置。然后再来一个循环，判断
 * 当前的字符是不是最后一次出现。如果是，res.push_back(i-last_i+1)
 * last_i=i+1;
 */
#ifndef CPPLEETCODE_PARTITION_LABELS_H
#define CPPLEETCODE_PARTITION_LABELS_H

#include <vector>
#include <string>
#include <atomic>
#include <climits>

using namespace std;c
vector<int> partitionLabels(string S) {
    vector<int> res, pos(26, 0);
    for (auto i = 0; i < S.size(); ++i)
        pos[S[i] - 'a'] = i;
    for (int i = 0, idx = INT_MIN, last_i = 0; i < S.size(); i++) {
        idx = max(idx, pos[S[i] - 'a']);
        if (idx == i) {
            res.push_back(i - __exchange(last_i, i + 1) + 1);
        }
    }
    return res;
}

#endif //CPPLEETCODE_PARTITION_LABELS_H
