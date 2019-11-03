//
// Created by hu on 19-1-18.
//

/**
 * https://leetcode.com/problems/average-of-levels-in-binary-tree/submissions/
 * 依然套代码- -level order
 */
#ifndef CPPLEETCODE_AVERAGE_OF_LEVELS_IN_BINARY_TREE_H
#define CPPLEETCODE_AVERAGE_OF_LEVELS_IN_BINARY_TREE_H
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans(1,root->val);
        queue<TreeNode* > level;level.push(root);
        int q=1;
        while(level.size()){
            int k=level.size();
            ans.emplace_back(0);
            q=0;
            for(int i=0;i<k;i++){
                if(level.front()->left){level.push(level.front()->left);
                    ans.back()+=level.front()->left->val;q++;
                }
                if(level.front()->right){level.push(level.front()->right);
                    ans.back()+=level.front()->right->val;q++;
                }
                level.pop();
            }if(ans.back())ans.back()/=q;
        }ans.pop_back();
        return ans;
    }
};
#endif //CPPLEETCODE_AVERAGE_OF_LEVELS_IN_BINARY_TREE_H
