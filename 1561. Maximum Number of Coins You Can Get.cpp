class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        
        int n = piles.size(), res = 0;
        
        for(int i = n-2; i>=n/3; i-=2)
        {
            res += piles[i];
        }
        
        return res;
    }
};
