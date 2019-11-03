//
// Created by hu on 19-1-15.
//

/**
 * https://leetcode.com/problems/maximum-depth-of-n-ary-tree/submissions/
 * 觉得还不错，递归的话非常简单，只要这么几行就可以了。
 * 不过效率的话应该不是很好
 *
 */
#ifndef CPPLEETCODE_MAXIMUM_DEPTH_OF_N_ARY_TREE_H
#define CPPLEETCODE_MAXIMUM_DEPTH_OF_N_ARY_TREE_H
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
    int maxDepth(Node* root) {
        if(!root)return 0;
        int depth = 0;
        for(Node* node:root->children)
            depth = max(depth,maxDepth(node));
        return ++depth;
    }
};
#endif //CPPLEETCODE_MAXIMUM_DEPTH_OF_N_ARY_TREE_H
