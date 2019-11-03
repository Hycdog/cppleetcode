//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/leaf-similar-trees/submissions/
 * 其实思路都是差不多的 只不过我第一个想到的是用vector装leaf 的val
 * 但是两个vector判断相等貌似还需要循环
 * 虽然不确定string判断要不要循环
 * 但是用string做容器也是很方便的
 */
#ifndef CPPLEETCODE_LEAF_SIMILAR_TREES_H
#define CPPLEETCODE_LEAF_SIMILAR_TREES_H
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string t1, t2;
        DFS(root1, t1);
        DFS(root2, t2);
        return t1==t2;
    }

    void DFS(TreeNode* root, string& s) {
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL) s+=to_string(root->val)+"#";
        DFS(root->left, s);
        DFS(root->right, s);
    }
};
#endif //CPPLEETCODE_LEAF_SIMILAR_TREES_H
