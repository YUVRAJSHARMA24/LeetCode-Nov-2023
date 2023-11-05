class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        int maxi = *max_element(arr.begin(), arr.end());
        
        if(k >= n)
            return maxi;
        
        int winner = arr[0];
        int cnt = 0;
        
        for(int i = 1; i<n; i++)
        {
            if(winner > arr[i])
                cnt++;
            else
            {
                winner = arr[i];
                cnt = 1; 
            }
            
            if(cnt == k || winner == maxi)
                return winner;
        }
        
        return winner;
    }
};
