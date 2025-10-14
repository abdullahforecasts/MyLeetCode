class Solution {
public:

    void evalSum(TreeNode* n, int low, int high, int& sum)
    {

        if (!n)
        {
            return;
        }

        evalSum(n->left, low, high, sum);

        if (n->val>=low and n->val<=high)
        {
            sum += n->val;
        }

        evalSum(n->right, low, high, sum);




    }

    int rangeSumBST(TreeNode* root, int low, int high) {
       
        int sum = 0;

      TreeNode* curr = root;

      evalSum(curr, low, high, sum);

        return sum;
    }
};