class Solution {
public:
    
    int middle(int l, int r)
    {

        return l + (r - l) / 2;
    }

    TreeNode* convert(vector<int>& nums, int l, int r)
    {
        if (l>r)
        {
            return nullptr;
        }

        int m = middle(l,r);
        TreeNode* n = new TreeNode(nums[m]);
        n->left = convert(nums, l, m - 1);
        n->right = convert(nums, m + 1,r );

        return n;


    }


    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int m = middle(0, nums.size() - 1);
        TreeNode* root = new TreeNode(nums[m]);
        
        
        root->left = convert(nums, 0, m - 1);
        root->right = convert(nums, m + 1, nums.size() - 1);

        return root;
    }
};
