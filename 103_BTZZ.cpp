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
   vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     
     if (!root)
     {
         return {};
     }

     bool dir = right;
     queue<TreeNode*>helper;

     helper.push(root);
     vector<vector<int>>ans;

     while (!helper.empty())
     {
         int size = helper.size();
         vector<int>a;

         for (size_t i = 0; i < size; i++)
         {
             TreeNode* curr = helper.front(); helper.pop();

             if (curr->left)
             {
                 helper.push(curr->left);
             }
             if (curr->right)
             {
                 helper.push(curr->right);
             }

             a.push_back(curr->val);


         }
        
         if (dir)
         {
             ans.push_back(a);
         }
         else
         {
             reverse(a.begin(), a.end());
             ans.push_back(a);
         }
         dir = !dir;



     }
     



     return ans;
     
 }
};