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
TreeNode* prv= nullptr;

void ino(TreeNode*& curr, int& min_diff)
{

if(!curr)return;
ino(curr->left, min_diff);

if(prv)
{

min_diff = min(min_diff , abs(prv->val - curr->val));

}
prv = curr;

ino(curr->right, min_diff);

}
    int getMinimumDifference(TreeNode* root) 
    {
        
int min_diff = INT_MAX;
ino(root, min_diff);

return min_diff;

    }
};