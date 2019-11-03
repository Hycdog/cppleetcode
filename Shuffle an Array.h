//
// Created by hu on 1/7/19.
//

/**
 * 看见mt19937 我才知道 我对c艹一无所知……
 * 利用随机数，和shuffle完成
 */
#ifndef CPPLEETCODE_SHUFFLE_AN_ARRAY_H
#define CPPLEETCODE_SHUFFLE_AN_ARRAY_H

#include <random>
#include <iostream>
#include <algorithm>

int x = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
    vector<int> deck1;
    vector<int> deck2;

    std::random_device rd;
    std::mt19937 g = std::mt19937(rd());

public:
    Solution(vector<int> nums) {
        std::swap(deck1, nums);
        deck2 = deck1;
    }

    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return deck1;
    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        std::shuffle(deck2.begin(), deck2.end(), g);
        return deck2;
    }
};
#endif //CPPLEETCODE_SHUFFLE_AN_ARRAY_H
