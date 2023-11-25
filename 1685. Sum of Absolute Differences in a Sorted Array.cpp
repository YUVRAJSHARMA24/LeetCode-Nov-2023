class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        
        int sum = 0;
        for(int i = 0; i<n; i++)
            sum += nums[i];
        
        int leftSum = 0, rightSum = 0;
        for(int i = 0; i<n; i++)
        {
            leftSum += nums[i];
            rightSum = sum - leftSum;
            res[i] = nums[i]*(i+1)-leftSum+rightSum-nums[i]*(n-1-i);
        }
        
        return res;
    }
};
