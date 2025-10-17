class Solution {
public:
    TreeNode* merge(TreeNode* n1, TreeNode* n2)
    {
        if (n1 and n2)
        {
            n1->val += n2->val;
            n1->left = merge(n1->left, n2->left);
            n1->right = merge(n1->right, n2->right);
            return n1;
        }

        if (n1 and !n2 )
        {
            return n1;
        }

        if (!n1 and n2)
        {
            return n2;
        }

   

        return nullptr;

    }


    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (!root1 and !root2)
        {
            return nullptr;
        }

        root1 = merge(root1, root2);

        return root1;
    }
};