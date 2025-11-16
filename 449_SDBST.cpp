class Codec
{

private:
    string sr;

public:
    void preorder(TreeNode *root)
    {
        if (!root)
        {

            sr += ",";
            sr += "#";
            return;
        }

        int v = root->val;

        sr += to_string(v);
        sr += "#";

        preorder(root->left);
        preorder(root->right);
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
sr.clear();
        preorder(root);
        return sr;
    }


    TreeNode* dePre(string data, int &indx)
    {
      
       if (indx >= data.size() or data[indx] == ',')
       {
        indx+=2;
        return nullptr;
       }
            int val=0;
       while (data[indx]!= '#')
       {
        val *=10;
        val += (data[indx] - '0');
        indx++;
       }
       indx++;
       TreeNode* curr = new TreeNode(val);
       curr->left = dePre(data,indx);
       curr->right = dePre(data,indx);

return curr;

    }
    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        int s =0;
TreeNode* root = dePre(data,s);


        return root;
    }
};