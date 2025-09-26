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


void preOrder(vector<int>& ans, TreeNode *node)
{
  if(!node)return;

  ans.push_back(node->val);
  preOrder(ans,node->left);
  preOrder(ans,node->right);

}
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int>ans;

        preOrder(ans,root);

        return ans;
    }
};