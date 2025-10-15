class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {

        if (depth ==1)
        {
            TreeNode* Nr = new TreeNode(val);
            Nr->left = root;
            return Nr;
        }


        queue<TreeNode*>helper;
        int dc = 2;
        helper.push(root);

        while (!helper.empty())
        {
            int hs = helper.size();

            if (dc == depth)
            {

                for (int i = 0; i < hs; i++)
                {
                    TreeNode* curr = helper.front(); helper.pop();

                    if (curr->left)
                    {


                        TreeNode* temp = curr->left;
                        curr->left = new TreeNode(val);
                        curr->left->left = temp;
                    }
                    else
                    {
                        curr->left = new TreeNode(val);
                    }

                    if (curr->right)
                    {
                        TreeNode* temp = curr->right;
                        curr->right = new TreeNode(val);
                        curr->right->right= temp;
                    }
                    else
                    {
                        curr->right = new TreeNode(val);
                    }

                    // if (!curr->left and !curr->right)
                    // {

                    //     curr->left = new TreeNode(val);
                    //     curr->right = new TreeNode(val);


                    // }
                }

                break;
            }
            else
            {



                for (int i = 0; i < hs; i++)
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



                }

            }

            dc++;
        }




        return root;
    }
};