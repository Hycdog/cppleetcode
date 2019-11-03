//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/increasing-order-search-tree/
 * 我的代码和大神的代码，高下立判……
 * 我承认还没看懂他的意思
 * Here's my attempt at a simple explanation with the code.

    def increasingBST(self, root, tail = None):

        # if this null node was a left child, tail is its parent
        # if this null node was a right child, tail is its parent's parent
        if not root: return tail

        # recursive call, traversing left while passing in the current node as tail
        res = self.increasingBST(root.left, root)

        # we don't want the current node to have a left child, only a single right child
        root.left = None

        # we set the current node's right child to be tail
        # what is tail? this part is important
        # if the current node is a left child, tail will be its parent
        # else if the current node is a right child, tail will be its parent's parent
        root.right = self.increasingBST(root.right, tail)

        # throughout the whole algorithm, res is the leaf of the leftmost path in the original tree
        # its the smallest node and thus will be the root of the modified tree
        return res

The most important thing to notice is that when we traverse left, the root is passed in, but when we traverse right, the tail is passed in.
In other words, traversing left passes in the current node to the next iteration, while traversing right passes in the current node's parent.

 */
#ifndef CPPLEETCODE_INCREASING_ORDER_SEARCH_TREE_H
#define CPPLEETCODE_INCREASING_ORDER_SEARCH_TREE_H
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
    void InOrder(TreeNode* root,vector<TreeNode* > &v){
        if(root==nullptr)return;
        InOrder(root->left,v);
        v.push_back(root);
        InOrder(root->right,v);
    }
    TreeNode* increasingBST(TreeNode* root) {
//        vector<TreeNode*> storage;
        InOrder(root,storage);
        for(int i=0;i<storage.size();i++){
            storage[i]->left = nullptr;
            storage[i]->right = i==storage.size()-1?nullptr:storage[i+1];
        }
        return storage[0];
    }
};

class Solution {
public:
    TreeNode* increasingBST(TreeNode* root, TreeNode* tail = NULL) {
        if (!root) return tail;
        TreeNode* res = increasingBST(root->left, root);
        root->left = NULL;
        root->right = increasingBST(root->right, tail);
        return res;
    }
};
#endif //CPPLEETCODE_INCREASING_ORDER_SEARCH_TREE_H
