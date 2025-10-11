class Solution {
public:

    void preorder(TreeNode* n, string & ans)
    {
        if (!n)
        {
            return;
        }
        ans.push_back(n->val);

        if (n->left)
        {
            preorder(n->left, ans);
        }
        else
        {
            ans.push_back('n');
        }
    
        if (n->right)
        {
            preorder(n->right, ans);
        }
        else
        {
            ans.push_back('n');
        }
    
    
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
       
        string pA;
        string qA;
       
        preorder(p, pA);
        preorder(q, qA);
        

        return pA == qA;
    }
};