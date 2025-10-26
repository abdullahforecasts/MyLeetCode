class Solution {
public:

    void ino(TreeNode*& curr, unordered_map<int, int>& meow)
    {
        if (!curr)
        {
            return;
        }

        ino(curr->left, meow);

        meow[curr->val] += 1;


        ino(curr->right, meow);

    }


    vector<int> findMode(TreeNode* root) {
       
        unordered_map<int, int>meow;
        vector<int>max_frq_nodes;
        ino(root, meow);
        int max_frq = 0;

        for (auto& it : meow)
        {
            if (it.second > max_frq)
            {
                max_frq = it.second;
            }

        }


        for (auto& it : meow)
        {

            if (it.second == max_frq)
            {
                max_frq_nodes.push_back(it.first);
            }

        }



        return max_frq_nodes;
    }
};