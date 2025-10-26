class Solution {
public:
    
    void ino(TreeNode*& curr, vector<int>& helper)
    {
        if (!curr)
        {
            return;
        }

        ino(curr->left, helper);

        helper.push_back(curr->val);

        ino(curr->right, helper);

    }


    bool findTarget(TreeNode* root, int k) {
       
        if (!root)
        {
            return false;
        }
        if (!root->left and !root->right)
        {
            return false;
        }

        vector<int>helper;

        ino(root, helper);


        int l = 0, r = helper.size() - 1;

        while (l<r)
        {
            int sum = helper[l] + helper[r];

            if (sum == k)
            {
                return true;
            }

            if (sum < k)
            {
                l++;
            }

            if (sum> k)
            {
                r--;
            }

        }


        return false;
    }
};