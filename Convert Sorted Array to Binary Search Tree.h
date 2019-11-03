//
// Created by hu on 1/7/19.
//

/**
 * 如何把一个有序的数组变成BST，这段代码很遗憾不是我自己写的，但是递归的思想必须要会：
 * 而且c++ 的 vector 切片是非常方便的，可以直接用begin()+x方法，根结点使用中间值middle
 * 左子树创建时使用leftInts
 * 右子树创建时使用rightInts
 * 别忘了特殊情况，输入数组大小0和1的时候不需要创建！
 */
#ifndef CPPLEETCODE_CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H
#define CPPLEETCODE_CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H
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
    TreeNode *sortedArrayToBST(vector<int> &num) {
        if(num.size() == 0) return NULL;
        if(num.size() == 1)
        {
            return new TreeNode(num[0]);
        }
        int middle = num.size()/2;
        TreeNode* root = new TreeNode(num[middle]);
        vector<int> leftInts(num.begin(), num.begin()+middle);
        vector<int> rightInts(num.begin()+middle+1, num.end());
        root->left = sortedArrayToBST(leftInts);
        root->right = sortedArrayToBST(rightInts);
        return root;
    }
};
#endif //CPPLEETCODE_CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H
