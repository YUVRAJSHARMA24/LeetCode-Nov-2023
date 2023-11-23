class Solution {
public:
    
    bool isValid(vector<int> &temp)
    {
        sort(temp.begin(), temp.end());
        if(temp.size() <= 2)
            return true;
        
        int d = temp[1] - temp[0];
        for(int i = 1; i<temp.size(); i++)
        {
            if(temp[i] - temp[i-1] != d)
                return false;
        }
        
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size();
        int m = l.size();
        vector<bool> res;
        
        for(int i = 0; i<m; i++)
        {
            vector<int> temp;
            int a = l[i];
            int b = r[i];
            
            for(int i = a; i<=b; i++)
                temp.push_back(nums[i]);
            
            res.push_back(isValid(temp));
        }
        
        return res;
    }
};
