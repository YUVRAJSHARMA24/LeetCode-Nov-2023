class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int res = 0;
        
        for(int i = n-1; i>=1; i--)
        {
            if(nums[i] == nums[i-1])
                continue;
            
            res += n-i;
        }
        
        return res;
    }
};
