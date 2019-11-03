//
// Created by hu on 1/9/19.
//

/**
 *
 * https://leetcode.com/problems/insert-delete-getrandom-o1/submissions/
 * 这道题因为要随机访问，所以选择了可以索引的vector。
 * 但是vector从中间删除元素非常麻烦。如果用erase的话，其实时间复杂度不是很好
 * 这里就学了一手大神的“trick”，用最后一个元素覆盖要删的元素，再改掉map中最后一个元素的映射地址
 * 然后pop_back()就好辣！是不是很骚
 *
 *
 */
#ifndef CPPLEETCODE_INSERT_DELETE_GETRANDOM_O_1_H
#define CPPLEETCODE_INSERT_DELETE_GETRANDOM_O_1_H

#include <cstdlib>
#include <unordered_map>
#include <vector>
using namespace std;

/*
Searches the container for an element with a key equivalent to k and returns an iterator to it if found, otherwise it returns an iterator to map::end
*/

class RandomizedSet {
private:
    unordered_map <int, int> elementIndex;
    vector <int> container;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {

    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(elementIndex.find(val)!=elementIndex.end())return false;
        elementIndex[val]=container.size();
        container.emplace_back(val);
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(elementIndex.find(val)==elementIndex.end())return false;
        int foundIndex=elementIndex[val];
        elementIndex[container.back()]=foundIndex;
        container[foundIndex]=container.back();
        container.pop_back();
        elementIndex.erase(val);
        return true;
    }

    /** Get a random element from the set. */
    int getRandom() {
        if(container.size())
            return container[rand()%container.size()];
        else
            return 0;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
#endif //CPPLEETCODE_INSERT_DELETE_GETRANDOM_O_1_H
