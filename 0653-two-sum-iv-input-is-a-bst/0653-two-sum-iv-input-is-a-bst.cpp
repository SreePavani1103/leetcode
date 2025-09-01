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
class Solution {
public:
vector<int> inorder(TreeNode *root,vector<int>&a)
     {
        if(root==nullptr)
        return a;
        else{
        inorder(root->left,a);
        a.push_back(root->val);
        inorder(root->right,a);
        }
        return a;
     }
    bool findTarget(TreeNode* root, int k) {
        vector<int>a;
        inorder(root,a);
      int l=0;
       int r=a.size()-1;
       while(l<r)
       {
          int sum=a[l]+a[r];
          if(sum==k)
          {
           return true;
          }
          else if(sum<k)
          l++;
          else
          r--;
       }
       return false;
    }
};