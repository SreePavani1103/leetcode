/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 struct Info{
    int d;
    int h;
 };
 Info find(TreeNode *root)
 {
    if(root==NULL)
    return {0,0};
    Info left=find(root->left);
    Info right=find(root->right);
    Info curr;
    curr.h=max(left.h,right.h)+1;
    curr.d=max(left.h+right.h,max(left.d,right.d));
    return curr;
 }

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        Info res=find(root);
        return res.d;
            }
};