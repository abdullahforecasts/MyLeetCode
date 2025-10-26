class Solution {
public:

    TreeNode* prev = nullptr;

    void ino(TreeNode*& curr, int &dif)
    {
        if (!curr)
        {
            return;
        }
        ino(curr->left,dif);


        if (prev)
        {
            dif = min(dif, abs(prev->val - curr->val));
           
        }
        prev = curr;


        ino(curr->right,dif);


    }

    int minDiffInBST(TreeNode* root) {
       
        if (!root)
        {
            return 0;
        }
        if (!root->left and !root->right)
        {
            return root->val;
        }
      
        int dif = INT_MAX;
        ino(root, dif);



        return dif;
    }
};