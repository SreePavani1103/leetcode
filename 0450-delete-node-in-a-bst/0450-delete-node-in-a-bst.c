/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 *};
 */
 int get_succesor(struct TreeNode* current)
 {
    struct TreeNode*temp=current;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->val;
 }
 struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if(root==NULL)
    return root;
    if(root->val<key)
   root->right= deleteNode(root->right,key);
   else if(root->val>key)
   root->left=deleteNode(root->left,key);
    else{
   if(root->left==NULL  && root->right==NULL)
   {
    free(root);
    return NULL;
   }
   else if(root->left==NULL ||root->right==NULL)
   {
       struct TreeNode*temp;
       if(root->left==NULL)
       {
        temp=root->right;
       }
       else
       {
       temp=root->left;
       }
       free(root);
       return temp;
   }
   else
   {
       int succesor=get_succesor(root->right);
       root->val=succesor;
       root->right=deleteNode(root->right,succesor);
   }
    }
    return root;
}