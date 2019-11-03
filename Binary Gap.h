//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/binary-gap/
 * 第一个是我的想法：
 * 既然要确定1之间的距离，先&1 然后一位一位移
 * 后面是评论区老铁的想法：
 * 其实也是移位，不过她是不停/2
 *
 */
#ifndef CPPLEETCODE_BINARY_GAP_H
#define CPPLEETCODE_BINARY_GAP_H
class Solution {
public:
    int binaryGap(int N) {
        int maxgap=0;int curgap= -1;
        while(N){
            maxgap = max(curgap,maxgap);
            curgap = N&1?1:(curgap==-1?curgap:curgap+1);
            N>>=1;
        }
        return maxgap;
    }
    int binaryGap2(int N) {
        int res = 0;
        for (int d = -32; N; N /= 2, d++)
            if (N % 2) res = max(res, d), d = 0;
        return res;
    }
};
#endif //CPPLEETCODE_BINARY_GAP_H
