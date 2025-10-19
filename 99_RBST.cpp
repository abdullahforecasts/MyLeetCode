class Solution {
public:

    TreeNode* first = nullptr; TreeNode* second = nullptr; TreeNode* prev = new TreeNode(INT_MIN);

    void inO(TreeNode*& curr)
    {
        if (!curr)
        {
            return;
        }

        inO(curr->left);

        if (curr->val< prev->val)
        {

            if (!first)
            {
                first = prev;
            }
              
            second = curr;
        }
        prev = curr;


        inO(curr->right);



    }

    void recoverTree(TreeNode* root) {
        
        if (!root)return;
       
        inO(root);
        if (first and second)
        {
            swap(first->val, second->val);
        }

    }
};