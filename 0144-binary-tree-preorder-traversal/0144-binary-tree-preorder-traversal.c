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
 
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int *ans=(int *)malloc(100*sizeof(int));
    int j=0;
    void order(struct TreeNode*root)
    {
        if(root!=NULL)
        {
             ans[j]=root->val;
             j++;
            order(root->left);
            order(root->right);
        }
    }
    order(root);
    *returnSize=j;
    return ans;
}