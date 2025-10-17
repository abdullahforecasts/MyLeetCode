class Solution {
public:

    TreeNode* SkipAndAdd(TreeNode* n, int low, int high)
    {

        if (!n)
        {
            return nullptr;
        }
        int  myval = n->val;

        if (myval >= low and myval <= high)
        {
            n->left = SkipAndAdd(n->left, low, high);
            n->right = SkipAndAdd(n->right, low, high);

            return n;

        }


        if ( n->val < low)
        {

            return SkipAndAdd(n->right, low, high);
        }

        if ( n->val>high)
        {
            return SkipAndAdd(n->left, low, high);
        }

       
     return nullptr;
    }


    TreeNode* trimBST(TreeNode* root, int low, int high) {
      
        return SkipAndAdd(root, low, high);
    }
};