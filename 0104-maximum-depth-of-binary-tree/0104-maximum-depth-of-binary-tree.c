/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    int cnt=0;
    if(root==NULL)
    return 0;
    else
    {
         int k=maxDepth(root->left);
         int l=maxDepth(root->right); 
    if(k>l)
    return k+1;
    else
    return l+1;
    }
}