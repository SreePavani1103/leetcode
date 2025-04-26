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
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int*ans=(int *)malloc(100*sizeof(int));
    int j=0;
     void my_order(struct TreeNode*root)
     {
        if(root!=NULL)
        {
            my_order(root->left);
            ans[j]=root->val;
            j++;
            my_order(root->right);

        }
     }
     my_order(root);
     *returnSize=j;
     return ans;
}