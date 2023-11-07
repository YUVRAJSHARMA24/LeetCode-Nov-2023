class Solution {
public:
    
    bool isSafe(vector<vector<int>>& grid, int n, int m, int i, int j)
    {
        if(i < n && j < m && i >= 0 && j >= 0 && grid[i][j] == 1)
            return true;
        
        return false;
    }
    
    bool dfs(vector<vector<int>>& grid, int n, int m, int i, int j)
    {
        if(i == n-1 && j == m-1)
            return true;
        
        grid[i][j] = 0;
        
        int dx[2] = {0, 1};
        int dy[2] = {1, 0};
        
        for(int k = 0; k<2; k++)
        {
            int x = i + dx[k];
            int y = j + dy[k];
            
            if(isSafe(grid, n, m, x, y))
            {
                if(dfs(grid, n, m, x, y))
                    return true;
            }
        }
        
        return false;
    }
    
    bool isPossibleToCutPath(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        if(!dfs(grid, n, m, 0, 0))
            return true;
        
        if(!dfs(grid, n, m, 0, 0))
            return true;
        
        return false;
    }
};
