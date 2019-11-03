//
// Created by hu on 19-1-14.
//

/**
 * https://leetcode.com/problems/invert-binary-tree/discuss/62731/Recursive-and-non-recursive-C%2B%2B-both-4ms
 * 太简单了！
 *
 *
 */
#ifndef CPPLEETCODE_INVERT_BINARY_TREE_H
#define CPPLEETCODE_INVERT_BINARY_TREE_H


class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root) {
            invertTree(root->left);
            invertTree(root->right);
            std::swap(root->left, root->right);
        }
        return root;
    }
};
#endif //CPPLEETCODE_INVERT_BINARY_TREE_H
