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
void inorder(TreeNode* n,vector<int>& helper)
{
if(!n)return ;

inorder(n->left, helper);
helper.push_back(n->val);
inorder(n->right,helper);

}
    int kthSmallest(TreeNode* root, int k)
    {
       vector<int>helper;
        inorder(root, helper);
      
      if(k>helper.size())return -1;
        
        return helper[k-1];

    }
};