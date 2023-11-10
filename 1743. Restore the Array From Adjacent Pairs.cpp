class Solution {
public:
    
    void dfs(int u, int prev, unordered_map<int, vector<int>> &adj, vector<int> &res)
    {
        res.push_back(u);
        
        for(int &v : adj[u])
        {
            if(v != prev)
                dfs(v, u, adj, res);
        }
    }
    
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int n = adjacentPairs.size();
        int m = adjacentPairs[0].size();
        
        unordered_map<int, vector<int>> adj;
        
        for(auto it : adjacentPairs)
        {
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        int src = 0;
        for(auto it : adj)
        {
            if(it.second.size() == 1)
            {
                src = it.first;
                break;
            }
        }
        
        vector<int> res;
        dfs(src, INT_MIN, adj, res);
        return res;
        
    }
};
