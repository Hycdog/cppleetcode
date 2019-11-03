//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/keys-and-rooms/submissions/
 * 一开始没看清题目 以为是任意哪个先进都可以
 * 最后发现规定一开始只能进房间0
 * 所以就变得很简单了：dfs呗！
 * 用vector<bool>可以节约存储空间
 */
#include <
#ifndef CPPLEETCODE_KEYS_AND_ROOMS_H
#define CPPLEETCODE_KEYS_AND_ROOMS_H

class Solution {
private:
    void dfs(int room,vector<bool>& visit,vector<vector<int>>& rooms){
        if(!visit[room]){
            visit[room]=true;
            for(int i:rooms[room]) dfs(i,visit,rooms);
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visit(rooms.size(),false);
        dfs(0,visit,rooms);
        for(bool i:visit){
            if(!i)return false;
        }
        return true;
    }
};
#endif //CPPLEETCODE_KEYS_AND_ROOMS_H
