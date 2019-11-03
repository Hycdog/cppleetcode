//
// Created by hu on 1/8/19.
//

/**
 *
 * https://leetcode.com/problems/binary-tree-level-order-traversal/submissions/
 * 二叉树的层序遍历
 */
#ifndef CPPLEETCODE_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H
#define CPPLEETCODE_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<TreeNode* > q;
        vector<int> row;
        vector<vector<int>> res;
        if(!root)return res;
        else{
            res.push_back(row);
            res.back().push_back(root->val);
            q.push_back(root);}
        int i = 1;
        while(!q.empty()){
            res.push_back(row);
            for(int k=0;k<i;k++){
                if(q[0]->left){q.push_back(q[0]->left);res.back().push_back(q[0]->left->val);}
                if(q[0]->right){q.push_back(q[0]->right);res.back().push_back(q[0]->right->val);}
                q.erase(q.begin());
            }
            i = q.size();
        }
        res.pop_back();
        return res;
    }
};
#endif //CPPLEETCODE_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H
