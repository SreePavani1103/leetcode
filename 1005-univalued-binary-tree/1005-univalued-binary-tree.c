/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isUnivalTree(struct TreeNode* root) {
    int *a=(int *)malloc(101*sizeof(int));
    int j=0;
    void order(struct TreeNode*root)
    {
        if(root!=NULL)
        {
            order(root->left);
            order(root->right);
            a[j]=root->val;
            j++;
        }
    }
    order(root);
    for(int i=0;i<j-1;i++)
    {
        if(a[i]!=a[i+1])
        return false;
    }
    return true;
}
