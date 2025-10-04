
class Solution {
public:

    bool dfs(int node, vector<vector<int>>& adj, vector<int>& visited)
    {
        visited[node] = 1;

        for (int neb: adj[node])
        {
            if (visited[neb]==0)
            {
                if (dfs(neb, adj, visited))
                {
                    return true;
                }
            }
            else if (visited[neb]==1)
            {
                return true;
            }
            
        }

        visited[node] = 2;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        int c = numCourses;
        vector<vector<int>>adj(c);
        vector<int>visited(c, 0);

        for ( auto & p :prerequisites)
        {
            int po = p[0], pre = p[1];
            adj[pre].push_back(po);
        }


        for (int i = 0; i < c; i++)
        {
            if (visited[i]==0)
            {
                if (dfs(i, adj, visited))
                {
                    return false;
                }
            }


        }



        return true;
    }
};
