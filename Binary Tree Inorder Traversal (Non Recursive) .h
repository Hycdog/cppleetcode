//
// Created by hu on 1/3/19.
//

#ifndef CPPLEETCODE_BINARY_TREE_INORDER_TRAVERSAL_NON_RECURSIVE_H
#define CPPLEETCODE_BINARY_TREE_INORDER_TRAVERSAL_NON_RECURSIVE_H

#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    /**
     *  上课讲过的哦！二叉树的非递归中序遍历
     * @param root a pointer points to a given node of a binary tree
     * @return the Inorder Traversal of the binary tree rooted on the given node, NON RECURSIVE
     */
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode* > s;
        TreeNode* curr=root;
        while(curr||!s.empty())
        {
            while(curr)
            {
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            s.pop();
            v.push_back(curr->val);
            curr=curr->right;

        }
        return v;
    }
};
#endif //CPPLEETCODE_BINARY_TREE_INORDER_TRAVERSAL_NON_RECURSIVE_H
