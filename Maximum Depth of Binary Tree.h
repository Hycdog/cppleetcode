//
// Created by hu on 1/3/19.
//

/**
 * 一行代码实现，不能做到最快，但也足够装b了 哈哈
 * 先判断根是否为空，只有根为空高度才可能是0
 * 然后就是递归了，每往下探一层高度+1
 */
#ifndef CPPLEETCODE_MAXIMUM_DEPTH_OF_BINARY_TREE_H
#define CPPLEETCODE_MAXIMUM_DEPTH_OF_BINARY_TREE_H
class Solution {
public:
    /**
     *
     * @param root Given a binary tree, find its maximum depth.
     * @return maximum depth
     */
    int maxDepth(TreeNode* root) {
        return root?1+max(maxDepth(root->left),maxDepth(root->right)):0;//if the root is NULL, depth is 0.
        // if the root is not NULL, compare recursively.
    }
};
#endif //CPPLEETCODE_MAXIMUM_DEPTH_OF_BINARY_TREE_H
