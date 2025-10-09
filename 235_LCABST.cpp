class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if (!root)
        {
            return nullptr;
        }

        int mn = min(p->val, q->val);
        int mx = p->val + q->val - mn;
        int rv = root->val;
        if (rv >= mn and rv <= mx)
        {
            return root;
        }
        else if (rv > mx)
        {
            return lowestCommonAncestor(root->left, p, q);
        }
        else if (rv< mn)
        {
            return lowestCommonAncestor(root->right, p, q);
        }

      return nullptr;

    }
};