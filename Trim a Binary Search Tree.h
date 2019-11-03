//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/trim-a-binary-search-tree/submissions/
 *
 * If the root value in the range [L, R]
      we need return the root, but trim its left and right subtree;
else if the root value < L
      because of binary search tree property, the root and the left subtree are not in range;
      we need return trimmed right subtree.
else
      similarly we need return trimmed left subtree.

   上面一个是容易理解的版本
   下面一个是考虑到free memory的版本
 */
#ifndef CPPLEETCODE_TRIM_A_BINARY_SEARCH_TREE_H
#define CPPLEETCODE_TRIM_A_BINARY_SEARCH_TREE_H
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root == nullptr) return nullptr;
        if (root->val < L) return trimBST(root->right, L, R);
        if (root->val > R) return trimBST(root->left, L, R);
        root->left = trimBST(root->left, L, R);
        root->right = trimBST(root->right, L, R);
        return root;
    }
};

class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R, bool top=true) {
        if (!root)
            return root;
        root->left = trimBST(root->left, L, R, false);
        root->right = trimBST(root->right, L, R, false);
        if (root->val >= L && root->val <= R)
            return root;
        auto result = root->val < L ? root->right : root->left;
        if (!top)
            delete root;
        return result;
    }
};
#endif //CPPLEETCODE_TRIM_A_BINARY_SEARCH_TREE_H
