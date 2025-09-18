#include <iostream>
#include <vector>
#include <queue>
using namespace std;


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>>helper;
        queue<TreeNode*>Q;

        if (!root)return helper;
        Q.push(root);

        while (!Q.empty())
        {
           
            
            int s = Q.size();
            vector<int> level;

            for (size_t i = 0; i < s; i++)
            {

              TreeNode* current = Q.front(); Q.pop();
              level.push_back(current->val);
              if (current->left != nullptr)
                  Q.push(current->left);

              if (current->right != nullptr)
                  Q.push(current->right);
            }
            helper.push_back(level);

           
           

        }


        return helper;

    }
};

int main() {
   
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution sol;
    vector<vector<int>> result = sol.levelOrder(root);

    
    for (auto& level : result) {
        for (int val : level) cout << val << " ";
        cout << endl;
    }
    return 0;
}
