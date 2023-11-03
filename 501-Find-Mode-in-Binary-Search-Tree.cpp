class Solution {
public:
    
    void solve(TreeNode* root, vector<int> &ans)
    {
        if(root == NULL)
            return;
        
        solve(root->left, ans);
        ans.push_back(root->val);
        solve(root->right, ans);
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        
        unordered_map<int, int> mp;
        int maxi = 0;
        for(auto it : ans)
        {
            mp[it]++;
            maxi = max(maxi, mp[it]);
        }
        
        vector<int> res;
        for(auto it : mp)
        {
            if(it.second == maxi)
                res.push_back(it.first);
        }
        
        return res;
    }
};
