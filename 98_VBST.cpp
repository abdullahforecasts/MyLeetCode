class Solution {
public:


    bool CheckValid(TreeNode* n, long long min , long long max)
    {
        if (!n)
        {
            return true;
        }

        if (n->val<=min or n->val >= max)
        {
            return false;
        }
        

        return CheckValid(n->left, min, n->val) and CheckValid(n->right, n->val, max);
       
    }


    bool isValidBST(TreeNode* root) {
       
        if (!root)return false;

        TreeNode* curr = root;
      

        return CheckValid(curr, LLONG_MIN, LLONG_MAX) ;
    }
};