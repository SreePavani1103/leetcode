/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int kthSmallest(struct TreeNode* root, int k) {
    int *ans=(int *)malloc(10001*sizeof(int));
    int j=0;
    void inorder(struct TreeNode *root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            ans[j]=root->val;
            j++;
            inorder(root->right);
        }
    }
    inorder(root);
    int l=ans[k-1];
    return l;
}