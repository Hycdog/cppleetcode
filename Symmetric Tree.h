//
// Created by hu on 1/9/19.
//
/**
 * https://leetcode.com/problems/symmetric-tree/
 * 判断一棵二叉树是否是对称的，递归做
 * q->left 和p->right
 * q->right 和p->left
 */
#ifndef CPPLEETCODE_SYMMETRIC_TREE_H
#define CPPLEETCODE_SYMMETRIC_TREE_H

class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if (!root) return true;
        return helper(root->left, root->right);
    }
    bool helper(TreeNode* p, TreeNode* q) {
        if (!p && !q) {
            return true;
        } else if (!p || !q) {
            return false;
        }
        if (p->val != q->val) {
            return false;
        }
        return helper(p->left,q->right) && helper(p->right, q->left);
    }
};
#endif //CPPLEETCODE_SYMMETRIC_TREE_H
