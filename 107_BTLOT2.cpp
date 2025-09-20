class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root)
    {
       
        if (!root)
        {
            return {};
        }

        queue<TreeNode*>helper;
        vector<vector<int>>lvls;

        TreeNode* start = root;

        helper.push(start);
       

        while (!helper.empty())
        {
            vector<int>lvl;
            int size = helper.size();

          
            for (size_t i = 0; i < size; i++)
            {
                TreeNode* temp = helper.front();
                helper.pop();

                if (temp->left)
                {
                    helper.push(temp->left);
                }


                if (temp->right)
                {
                    helper.push(temp->right);
                }

                lvl.push_back(temp->val);

            }
           
            lvls.push_back(lvl);

        }

        reverse(lvls.begin(), lvls.end());

        return lvls;

    }
};