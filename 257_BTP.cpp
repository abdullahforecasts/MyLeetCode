class Solution {
public:

    void Allpaths(TreeNode* n, string& p, vector<string>& paths)
    {
        if (!n)
        {
            return;
        }


         int len = p.size(); 
        p += to_string(n->val);


        if (!n->left and !n->right)
        {


            paths.push_back(p);
           p.erase(len);
            return;
        }

        

             p += "->";  
       
       
        Allpaths(n->left, p, paths);    
        Allpaths(n->right, p, paths);

        
        p.erase(len);
    }
    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string>paths;
        if (!root)return paths;
        string p;

        Allpaths(root, p, paths);

        return paths;
    }
};