/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:

    unordered_map<Node*, Node*>cloned;

    Node* cloneGraph(Node* node) {
        if (!node)
        {
            return node;
        }

        if (cloned.find(node)!= cloned.end())
        {
            return cloned[node];   
        }

        Node* curr = new Node(node->val);

        cloned[node] = curr;


        for (auto neb: node->neighbors)
        {
            
            curr->neighbors.push_back(cloneGraph(neb));

        }


        return curr;
    }
};