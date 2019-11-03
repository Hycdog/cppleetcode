//
// Created by hu on 19-1-14.
//

/**
 * https://leetcode.com/problems/flip-equivalent-binary-trees/submissions/
 * 其实只要判断：flip or not flip
 * 也就是ll rr相等，还是lr rl相等
 */
#ifndef CPPLEETCODE_FLIP_EQUIVALENT_H
#define CPPLEETCODE_FLIP_EQUIVALENT_H
class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(!root1&&!root2) return true;
        if(!root1&&root2||!root2&&root1) return false;
        if(root1->val!=root2->val) return false;
        return (flipEquiv(root1->left,root2->right)&&flipEquiv(root1->right,root2->left))||(flipEquiv(root1->left,root2->left)&&flipEquiv(root1->right,root2->right));
    }
};
#endif //CPPLEETCODE_FLIP_EQUIVALENT_H
