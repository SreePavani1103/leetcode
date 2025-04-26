/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root) {
    int *ans=(int *)malloc(500000*sizeof(int));
    int j=0;
    void order(struct TreeNode *root)
    {
        if(root!=NULL)
        {
            order(root->left);
            order(root->right);
            ans[j]=root->val;
            j++;
        }
    }
    order(root);
    return j;
}