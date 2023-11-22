class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int, vector<int>> mp;
        
        for(int i = nums.size()-1; i >= 0; i--)
        {
            for(int j = 0; j<nums[i].size(); j++)
            {
                int diagonal = i + j;
                mp[diagonal].push_back(nums[i][j]);
            }
        }
        
        vector<int> res;
        int diag = 0;
        while(mp.find(diag) != mp.end())
        {
            for(auto &it : mp[diag])
                res.push_back(it);
            
            diag++;
        }
        
        return res;
    }
};
