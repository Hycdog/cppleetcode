//
// Created by hu on 19-1-21.
//

/**
 * https://leetcode.com/problems/find-largest-value-in-each-tree-row/submissions/
 */
#ifndef CPPLEETCODE_FIND_LARGEST_VALUE_IN_EACH_TREE_ROW_H
#define CPPLEETCODE_FIND_LARGEST_VALUE_IN_EACH_TREE_ROW_H
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
    vector<int> largestValues(TreeNode* root) {
        if(!root)return {};
        queue<TreeNode* > level;
        vector<int> ans;
        level.push(root);
        while(!level.empty()){
            int k = level.size();
            int max = level.front()->val;
            for(int i=0;i<k;i++){
                if(level.front()->left)level.push(level.front()->left);
                if(level.front()->right)level.push(level.front()->right);
                if(level.front()->val>max) max = level.front()->val;
                level.pop();
            }
            ans.push_back(max);
        }
        return ans;
    }
};
#endif //CPPLEETCODE_FIND_LARGEST_VALUE_IN_EACH_TREE_ROW_H
