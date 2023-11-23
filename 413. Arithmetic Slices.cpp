class Solution {
public:
      
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        
        if(n < 3)
            return 0;
        
        int cnt = 0, d = nums[1] - nums[0], curr = 0;
        for(int i = 1; i<n-1; i++)
        {
            int curr_d = nums[i+1] - nums[i];
            
            if(curr_d == d)
                ++curr;
            else
            {
                d = curr_d;
                curr = 0;
            }
            
            cnt += curr;
        } 
        return cnt;
    }
};
