class Solution {
public:

    void Insertion(TreeNode* n, int val)
    {
        if (!n)
        {
            return;
        }

        if (val<n->val)
        {
            if (n->left)
            {
                Insertion(n->left, val);
            }
            else
            {
                n->left = new TreeNode(val);
                return;
            }


        }
        else
        {



            if (n->right)
            {
                Insertion(n->right, val);
            }
            else
            {
                n->right = new TreeNode(val);
                return;
            }
        }



    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if (!root)
        {
             root = new TreeNode(val);
            return root ;
        }

        TreeNode* curr = root;
        Insertion(curr, val);


        return root;
    }
};