/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isValidBST(struct TreeNode* root) {
  int *a=(int *)malloc(10001*sizeof(int));
  int j=0;
  void inorder(struct TreeNode*root)
  {
    if(root!=NULL)
    {
        inorder(root->left);
        a[j]=root->val;
        j++;
        inorder(root->right);
    }
  }
  inorder(root);
  int cnt=0;
  for(int i=0;i<j-1;i++)
  {
    if(a[i]>=a[i+1])
    {
       return false;
    }
  }
  return true;
}