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
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        return 0;
        queue<TreeNode*>q;
        int h=0;
        q.push(root);
        while(!q.empty())
        {
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                TreeNode *node=q.front();
                q.pop();

            if(node->left)
            q.push(node->left);
            if(node->right)
            q.push(node->right);
            }
            h++;
        }
        return h;
    }
};