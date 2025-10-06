class Solution {
public:
   

    void dfs(vector<vector<int>>& graph, int indx, vector<vector<int>>& result,vector<int>&curr)
    {
     
        curr.push_back(indx);

        if (indx == graph.size()-1)
        {
            result.push_back(curr);
            curr.pop_back();
            return;

        }


        for (int i = 0; i < graph[indx].size(); i++)
        {
            int nn = graph[indx][i];
            dfs(graph, nn, result, curr);
        }

        curr.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       
        vector<vector<int>>result;
        vector<int>curr;
        dfs(graph, 0, result, curr);


        return result;
    }
};