//
// Created by hu on 1/7/19.
//

/**
 * 取BST的第k小的元素
 * 下面的算法是最容易想到的，就是中序遍历一下，然后把结果存进容器里，
 * 然后返回容器第k-1下标的值就行了。
 * 其实还有改进的空间，比如容器插入到第k个，就可以结束了。留待以后优化
 */
#ifndef CPPLEETCODE_KTH_SMALLEST_ELEMENT_IN_A_BST_H
#define CPPLEETCODE_KTH_SMALLEST_ELEMENT_IN_A_BST_H
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
private:
    vector<int> bathtub;
    void InOrder(TreeNode* root){
        if(root) {
            InOrder(root->left);
            bathtub.push_back(root->val);
            InOrder(root->right);
        }
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        InOrder(root);
        return bathtub[k-1];
    }
};
#endif //CPPLEETCODE_KTH_SMALLEST_ELEMENT_IN_A_BST_H
