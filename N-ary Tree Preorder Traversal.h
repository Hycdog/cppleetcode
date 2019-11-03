//
// Created by hu on 19-1-14.
//
/**
 * https://leetcode.com/problems/n-ary-tree-preorder-traversal/submissions/
 * n叉树的先序遍历
 */

#ifndef CPPLEETCODE_N_ARY_TREE_PREORDER_TRAVERSAL_H
#define CPPLEETCODE_N_ARY_TREE_PREORDER_TRAVERSAL_H
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
private:
    void Travel(Node* root,vector<int>&res){
        if(!root)return;
        res.push_back(root->val);
        for(Node* i:root->children)Travel(i,res);
    }
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        Travel(root,result);
        return result;
    }
};
#endif //CPPLEETCODE_N_ARY_TREE_PREORDER_TRAVERSAL_H
