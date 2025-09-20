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
   int findBottomLeftValue(TreeNode* root) 
{

    if (!root)
    {
        return -1;
    }

    queue<TreeNode*>helper;
    
    TreeNode* start = root;

    helper.push(start);

    int ans = root->val;
    while (!helper.empty())
    {
       
        int size = helper.size();


        for (size_t i = 0; i < size; i++)
        {
            TreeNode* temp = helper.front();
            helper.pop();


            if (i == 0)ans = temp->val;

            if (temp->left)
            {
                helper.push(temp->left);
            }


            if (temp->right)
            {
                helper.push(temp->right);
            }

           

        }

        

    }

   

    return ans;




}
};