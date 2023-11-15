class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        int maxi = INT_MIN;
        for(int i = 0; i<n; i++)
        {
            if(i == 0)
                arr[i] = 1;
            else if((arr[i]-arr[i-1]) > 1)
                arr[i] = arr[i-1] + 1;
            
            maxi = max(maxi, arr[i]);
        }
        
        return maxi;
    }
};
