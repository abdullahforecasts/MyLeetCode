class Solution {
public:

    TreeNode* successor(TreeNode* curr)
    {
        if (!curr)
        {
            return nullptr;
        }

        while(curr and curr->left)
        curr = curr->left;


        // if (curr->left)
        // {
        //     return successor(curr->left);
        // }

        return curr;
    }



    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root)
        {
            return root;
        }

        if (key < root->val )
        {
           root->left= deleteNode(root->left, key);
        }
        else if (key > root->val)
        {
           root->right= deleteNode(root->right, key);
        }
        else
        {

            if (!root->left and ! root->right)
            {
                delete root;
                return nullptr;

            }

            if (!root->left or !root->right)
            {
                TreeNode* child = root->left ? root->left : root->right;
                delete root;
                return child;


            }
        

            TreeNode* succ = successor(root->right);
          
            root->val = succ->val;
            
            root->right = deleteNode(root->right, succ->val);

          

        }





        return root;
    }
};