/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ans=(int *)malloc(100*sizeof(int));
    int k=0;
    void post(struct TreeNode*root)
    {
        if(root!=NULL)
        {
            post(root->left);
            post(root->right);
            ans[k]=root->val;
            k++;
        }
    }
    post(root);
    *returnSize=k;
    return ans;
}