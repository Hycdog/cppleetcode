//
// Created by hu on 19-1-14.
//
/**
 * https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/
 *
 */
#ifndef CPPLEETCODE_SEARCH_IN_A_BINARY_SEARCH_TREE_H
#define CPPLEETCODE_SEARCH_IN_A_BINARY_SEARCH_TREE_H
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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)return nullptr;
        else if(root->val == val)return root;
        else if(root->val>val) return searchBST(root->left,val);
        else return searchBST(root->right,val);
    }
};
#endif //CPPLEETCODE_SEARCH_IN_A_BINARY_SEARCH_TREE_H
