class Solution {
public:

    void inorder(TreeNode*& curr, vector<TreeNode*>&helper)
    {
        if (!curr)
        {
            return;
        }
        inorder(curr->left, helper);

        helper.push_back(curr);
       

        inorder(curr->right, helper);


    }

    TreeNode* increasingBST(TreeNode* root) {

        TreeNode d(-1);
        TreeNode* save = &d;
        vector<TreeNode*>helper;

        inorder(root, helper);

        for (size_t i = 0; i < helper.size(); i++)
        {

            save->right = helper[i];
            save = save->right;
            save->left = nullptr;
            

        }


        return d.right;
    }
};