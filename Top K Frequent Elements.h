//
// Created by hu on 1/3/19.
//
/**
 * 又一个让我看跪的大神，尤其是里头的lambda表达式，看得我都快硬了。
 * 为什么代码可以写的那么sexy！
 * 也许这就是大佬吧！
 * 基本操作还是map，然后计数。
 * 最后那个lambda expression 其实就是自己定义了map的排序方法，是排key-value中的value的大小
 * 然后用std里的nth_element求第几个数
 */
#ifndef CPPLEETCODE_TOP_K_FREQUENT_ELEMENTS_H
#define CPPLEETCODE_TOP_K_FREQUENT_ELEMENTS_H

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    /**
     *
     * @param nums a non-empty array of integers
     * @param k number of most frequent numbers requested
     * @return Given a non-empty array of integers, return the k most frequent elements.
     */
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int num : nums){
            map[num]++;
        }
        vector <int> res;
        for (auto it = map.begin(); it != map.end(); ++it) {
            res.push_back(it->first);
        }
        //C++11 feature: Lambda Expression
        std::nth_element(res.begin(), res.begin() + k, res.end(), [&map](int l, int r) -> bool {return map[l] > map[r];} );
        res.erase(res.begin() + k, res.end());
        return res;
    }
};


#endif //CPPLEETCODE_TOP_K_FREQUENT_ELEMENTS_H
