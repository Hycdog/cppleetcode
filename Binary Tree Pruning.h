//
// Created by hu on 1/2/19.
//

#ifndef CPPLEETCODE_BINARY_TREE_PRUNING_H
#define CPPLEETCODE_BINARY_TREE_PRUNING_H
/**
 * 这道题的原意是要去掉所有不含有1的子树。我一开始想得太复杂，写的是deletable
 * 结果递归了半天也搞不定……其实只要递归判断是不是包含1就行了。
 * return 左子树 右子树 自己 有没有1
 */
/**
class Solution {
public:
    bool contain_one(TreeNode* root){
        if(!((！root->left)?false:contain_one(root->left))) root->left=nullptr;
        if(!((！root->right)?false:contain_one(root->right)))root->right=nullptr;
        return root->val || root->left || root->right;
    }
    TreeNode* pruneTree(TreeNode* root) {
        if(!contain_one(root))root=NULL;
        return root;
    }
};
 */
#endif //CPPLEETCODE_BINARY_TREE_PRUNING_H
