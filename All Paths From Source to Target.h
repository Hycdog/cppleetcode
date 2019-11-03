//
// Created by hu on 1/2/19.
//

#ifndef CPPLEETCODE_ALL_PATHS_FROM_SOURCE_TO_TARGET_H
#define CPPLEETCODE_ALL_PATHS_FROM_SOURCE_TO_TARGET_H

#include <vector>
using namespace std;
/**
 *
 * https://leetcode.com/problems/all-paths-from-source-to-target/
 * 这道题是典型的dfs了，而且题目也非常像邻接表，给了每个结点的邻接节点，其实就是
 * 在每一次递归的时候都把路径记录下来，到最后判断是不是到了最后一个结点，如果是的话就把整条路径都
 * 加入到答案的vector容器中。
 */
class Solution {
public:

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> out;
        vector<int> curr_path;
        dfs(graph, out, curr_path, 0);
        return out;
    }

    void dfs(vector<vector<int>> &graph, vector<vector<int>> &paths, vector<int> curr_path, int curr_node){
        curr_path.push_back(curr_node);
        for(auto i: graph[curr_node]){
            dfs(graph, paths, curr_path, i);
        }
        if(curr_node == graph.size()-1){
            paths.push_back(curr_path);
        }
    }
};
#endif //CPPLEETCODE_ALL_PATHS_FROM_SOURCE_TO_TARGET_H
