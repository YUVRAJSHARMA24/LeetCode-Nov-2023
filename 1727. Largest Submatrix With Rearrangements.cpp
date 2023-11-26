class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int maxArea = 0;
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(matrix[i][j] == 1 && i > 0)
                    matrix[i][j] += matrix[i-1][j];
                
            }
            
            vector<int> heights = matrix[i];
            sort(heights.begin(), heights.end(), greater<int>());
            
            for(int i = 0; i<m; i++)
            {
                int base = i+1;
                int height = heights[i];
                
                maxArea = max(maxArea, base*height);
            }
        }
        
        return maxArea;
    }
};
