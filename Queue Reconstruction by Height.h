//
// Created by hu on 19-1-16.
//
/**
 * https://leetcode.com/problems/queue-reconstruction-by-height/submissions/
 * 进步了进步了，会写lambda表达式了
 * 可是有个很草蛋的bug：一旦把lambda表达式的第一个条件改成< 就会runtime error
 * 因为vector的insert机制很神奇……
 * 如果从大到小insert 就会一直往后移，最后长度会很大。
 * 所以为了确保不会出现这么草蛋的事情，就从小到大insert
 * 具体解释：https://leetcode.com/problems/queue-reconstruction-by-height/discuss/89359/Explanation-of-the-neat-Sort%2BInsert-solution
 * People are only counting (in their k-value) taller or equal-height others standing in front of them. So a smallest person is completely irrelevant for all taller ones. And of all smallest people, the one standing most in the back is even completely irrelevant for everybody else. Nobody is counting that person. So we can first arrange everybody else, ignoring that one person. And then just insert that person appropriately. Now note that while this person is irrelevant for everybody else, everybody else is relevant for this person - this person counts exactly everybody in front of them. So their count-value tells you exactly the index they must be standing.
So you can first solve the sub-problem with all but that one person and then just insert that person appropriately. And you can solve that sub-problem the same way, first solving the sub-sub-problem with all but the last-smallest person of the subproblem. And so on. The base case is when you have the sub-...-sub-problem of zero people. You're then inserting the people in the reverse order, i.e., that overall last-smallest person in the very end and thus the first-tallest person in the very beginning. That's what the above solution does, Sorting the people from the first-tallest to the last-smallest, and inserting them one by one as appropriate.
Now that's my explanation. If you have a different one, I'm interested to see it :-)
 也就是说，对于一个矮个子来说，假设他是最矮的，他前面比他高的人数就是他站的位置。

 */
#ifndef CPPLEETCODE_QUEUE_RECONSTRUCTION_H
#define CPPLEETCODE_QUEUE_RECONSTRUCTION_H
class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        sort(people.begin(),people.end(),[&](pair<int,int> p1,pair<int,int> p2){
            return p1.first > p2.first || (p1.first == p2.first && p1.second < p2.second);});
        vector<pair<int, int>> res;
        for (pair<int,int> p : people)
            res.insert(res.begin() + p.second, p);
        return res;
    }
};
#endif //CPPLEETCODE_QUEUE_RECONSTRUCTION_H
