class Solution {
public:

    bool dfs(int node, vector<vector<int>>& adj, vector<int>& visited, stack<int>& ms) {
        visited[node] = 1; // 1 = visiting

        for (int &neb : adj[node]) {
            if (visited[neb] == 0) {
                if (dfs(neb, adj, visited, ms)) return true; // cycle found
            } 
            else if (visited[neb] == 1) {
                return true; // back edge -> cycle
            }
        }

        visited[node] = 2; // 2 = finished
        ms.push(node);
        return false;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for (auto &p : prerequisites) {
            int u = p[0], v = p[1];
            adj[v].push_back(u);
        }

        vector<int> visited(numCourses, 0);
        stack<int> ms;

        for (int i = 0; i < numCourses; i++) {
            if (visited[i] == 0) {
                if (dfs(i, adj, visited, ms)) {
                    return {}; 
                }
            }
        }

        vector<int> rev_ms;
        while (!ms.empty()) {
            rev_ms.push_back(ms.top());
            ms.pop();
        }

        return rev_ms;
    }
};
