//
// Created by hu on 1/2/19.
//

/**
 * 最大堆的生成
 * 也是有点类似于二分法，根是max_i;
 * 左边是left到max_i;
 * 右边是max_i+1到right;
 * 递归实现
 *
 */

#ifndef CPPLEETCODE_MAXIMUM_BINARY_TREE_H
#define CPPLEETCODE_MAXIMUM_BINARY_TREE_H

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
    TreeNode* constructMaximumBinaryTree(vector<int> &nums) {
        // cout<<nums.size();
        return construct(nums, 0, nums.size());
    }
    TreeNode* construct(vector<int> &nums, int l, int r) {
        if (l >= r)
            return nullptr;
        int max_i = max(nums, l, r);
        TreeNode* root = new TreeNode(nums[max_i]);
        root->left = construct(nums, l, max_i);
        root->right = construct(nums, max_i + 1, r);
        return root;
    }
    int max(vector<int> &nums, int l, int r) {
        int max_i = l;
        for (int i = l; i < r; i++) {
            if (nums[max_i] < nums[i])
                max_i = i;
        }
        return max_i;
    }
};
 **/
#endif //CPPLEETCODE_MAXIMUM_BINARY_TREE_H
