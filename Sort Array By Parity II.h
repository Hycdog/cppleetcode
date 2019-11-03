//
// Created by hu on 1/10/19.
//
/**
 * https://leetcode.com/problems/sort-array-by-parity-ii/
 * 这道题的要求很简单，只要能按照偶-奇的顺序排列就行了
 * 下面这种解法看上去很简单，其实就是两个指针，一个是偶指针，一个是奇指针
 * i指向第一个非偶数（循环停止的地方）
 * j指向第一个非奇数（循环停止的地方）
 *
 */
#ifndef CPPLEETCODE_SORT_ARRAY_BY_PARITY_II_H
#define CPPLEETCODE_SORT_ARRAY_BY_PARITY_II_H
class Solution {
public:                                                                                                                                                                                 vector<int> sortArrayByParityII(vector<int>& A) {
        for (int i = 0, j = 1; i < A.size(); i += 2, j += 2) {
            while (i < A.size() && A[i] % 2 == 0) i += 2;
            while (j < A.size() && A[j] % 2 == 1) j += 2;
            if (i < A.size()) swap(A[i], A[j]);
        }
        return A;
    }
};

//1/14/19
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        if(A.size()<=1){
            return A;
        }
        int* odd=&A[1];
        int* even=&A[0];
        while(even-&A[0] <=A.size()&&odd-&A[0]<=A.size()-1){
            while(*odd%2==1)odd+=2;
            while(*even%2==0)even+=2;
            if(even-&A[0] <=A.size()&&odd-&A[0]<=A.size()-1){
                swap(*odd,*even);
            }
        }
        return A;
    }
};
#endif //CPPLEETCODE_SORT_ARRAY_BY_PARITY_II_H
