class Solution {
public:
    int mod = 1000000007;
    
    int rev(int n)
    {
        int num = 0;
        while(n)
        {
            num = num * 10 + n % 10;
            n /= 10;
        }
        
        return num;
    }
    
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, long> mp;
        
        for(auto &num : nums)
            mp[num - rev(num)]++;
        
        int cnt = 0;
        for(auto &it : mp)
            cnt = (cnt + (it.second * (it.second - 1))/2) % mod; 
        
        
        return cnt;
    }
};
