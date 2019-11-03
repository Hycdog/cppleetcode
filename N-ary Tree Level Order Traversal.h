//
// Created by hu on 19-1-17.
//

/**
 * https://leetcode.com/problems/n-ary-tree-level-order-traversal/submissions/
 * 我用的是非递归的做法，用queue就很简单。
 */
#ifndef CPPLEETCODE_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_H
#define CPPLEETCODE_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_H
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)return {};
        vector<vector<int>> ans(1,vector<int>(1,root->val));
        queue<Node* > level;level.push(root);
        while(level.size()){
                        int k=level.size();
                        ans.push_back({});
            for(int i=0;i<k;i++){
                  for(auto j :level.front()->children){
                        level.push(j);
                        ans.back().push_back(j->val);
                }level.pop();
            }
        }ans.pop_back();
        return ans;
    }
};
#endif //CPPLEETCODE_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_H
