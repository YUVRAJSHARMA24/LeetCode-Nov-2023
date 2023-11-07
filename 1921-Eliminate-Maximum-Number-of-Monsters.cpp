class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        
        vector<int> time(n);
        for(int i = 0; i<n; i++)
            time[i] = ceil((float)dist[i]/speed[i]);
        
        sort(time.begin(), time.end());
        int cnt = 1, timePass = 1;
        for(int i = 1; i<n; i++)
        {
            if(time[i] - timePass <= 0)
                return cnt;
            
            cnt++;
            timePass++;
        }
        
        return cnt;
    }
};
