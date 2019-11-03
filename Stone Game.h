//
// Created by hu on 19-1-16.
//
/**
 * Approach 1: Just return true

Alex is first to pick pile.
piles.length is even, and this lead to an interesting fact:
Alex can always pick odd piles or always pick even piles!

For example,
If Alex wants to pick even indexed piles piles[0], piles[2], ....., piles[n-2],
he picks first piles[0], then Lee can pick either piles[1] or piles[n - 1].
Every turn, Alex can always pick even indexed piles and Lee can only pick odd indexed piles.

In the description, we know that sum(piles) is odd.
If sum(piles[even]) > sum(piles[odd]), Alex just picks all evens and wins.
If sum(piles[even]) < sum(piles[odd]), Alex just picks all odds and wins.

So, Alex always defeats Lee in this game.

C++/Java

    return true;

Python:

    return True

 */
#ifndef CPPLEETCODE_STONE_GAME_H
#define CPPLEETCODE_STONE_GAME_H
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};
#endif //CPPLEETCODE_STONE_GAME_H
