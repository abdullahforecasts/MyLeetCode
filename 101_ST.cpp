class Solution {
public:

    bool isMirror(TreeNode* t1, TreeNode* t2)
    {
        if (!t1 and !t2)
        {
            return true;
        }
        if (!t1 or !t2)
        {
            return false;
        }



        return t1->val == t2->val and isMirror(t1->left, t2->right) and isMirror(t1->right, t2->left);
    }
   


    bool isSymmetric(TreeNode* root) {
        
        if (!root)
        {
            return true;
        }
        return isMirror(root->left, root->right); //O(n)
    }
};