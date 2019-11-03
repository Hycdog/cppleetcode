//
// Created by hu on 19-1-17.
//

/**
 *
 * https://leetcode.com/problems/find-bottom-left-tree-value/submissions/
 * 下面的解法我是用了level traversal的思路，非递归，so shitty
 *
 */
#ifndef CPPLEETCODE_FIND_BOTTOM_LEFT_TREE_VALUE_H
#define CPPLEETCODE_FIND_BOTTOM_LEFT_TREE_VALUE_H

#include "Partition Labels.h"

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
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>> ans(1,vector<int>(1,root->val));
        queue<TreeNode* > level;level.push(root);
        while(level.size()){
            int k=level.size();
            ans.emplace_back(vector<int>());
            for(int i=0;i<k;i++){
                if(level.front()->left){level.push(level.front()->left);
                    ans.back().emplace_back(level.front()->left->val);
                }
                if(level.front()->right){level.push(level.front()->right);
                    ans.back().emplace_back(level.front()->right->val);
                }
                level.pop();
            }
        }ans.pop_back();
        return ans.back()[0];
    }
};

/**
 * 接下来贴上其他人用bfs做的
 * 这里有个比较tricky的地方在于：由于是要求leftmost
 * 而递归又是从root->left开始的
 * 也就是说第一个下探到下一层的递归分支一定是最左侧的分支
 * 所以就不要加别的判断条件了。
 */
class Solution {
public:
    void findBottomLeftValue(TreeNode* root, int& maxDepth, int& leftVal, int depth) {
        if (root == NULL) {
            return;
        }
        //Go to the left and right of each node
        findBottomLeftValue(root->left, maxDepth, leftVal, depth+1);
        findBottomLeftValue(root->right, maxDepth, leftVal, depth+1);
        //Update leftVal and maxDepth
        if (depth > maxDepth) {
            maxDepth = depth;
            leftVal = root->val;
        }
    }

    //Entry function
    int findBottomLeftValue(TreeNode* root) {
        int maxDepth = 0;
        //Initialize leftVal with root's value to cover the edge case with single node
        int leftVal = root->val;
        findBottomLeftValue(root, maxDepth, leftVal, 0);
        return leftVal;
    }
};
#endif //CPPLEETCODE_FIND_BOTTOM_LEFT_TREE_VALUE_H
