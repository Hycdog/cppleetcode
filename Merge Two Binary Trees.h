//
// Created by hu on 1/3/19.
//

/**
 * 把两棵二叉树按指定的规则merge
 * 这个规则很有意思，有点像两个半透明的纸叠在一起
 * 也是一样的递归就可以了
 *
 */
#ifndef CPPLEETCODE_MERGE_TWO_BINARY_TREES_H
#define CPPLEETCODE_MERGE_TWO_BINARY_TREES_H
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /**
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1)return t2;
        if(!t2)return t1;
        t1->val+=t2->val;
        t1->left=mergeTrees(t1->left,t2->left);
        t1->right=mergeTrees(t1->right,t2->right);
        return t1;
    }
};
  */
#endif //CPPLEETCODE_MERGE_TWO_BINARY_TREES_H
 