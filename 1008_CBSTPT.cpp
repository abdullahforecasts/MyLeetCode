class Solution {
public:
    //  { 8, 5, 1, 7, 10, 12 }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
         if(preorder.size() == 0)return nullptr;
        int i = 0;
        TreeNode* root = new TreeNode(preorder[i++]);

        while (i<preorder.size())
        {

            int n = preorder[i++];
            
            TreeNode* nn = root;
            while (nn)
            {

                if (n < nn->val)
                {
                    if (nn->left)
                    {
                        nn = nn->left;
                    }
                    else
                    {
                        nn->left = new TreeNode(n);
                        break;
                    }
                }
                else if (n > nn->val)
                {


                    if (nn->right)
                    {
                      nn =  nn->right;
                    }
                    else
                    {
                        nn->right = new TreeNode(n);
                        break;
                    }
                }
            }


        }



        return root;
    }
};