class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        unordered_set<char> letter;
        
        for(auto &ch : s)
            letter.insert(ch);
        
        int res = 0;
        
        for(auto &it : letter)
        {
            int first_idx = -1, last_idx = -1;
            
            for(int i = 0; i<n; i++)
            {
                if(s[i] == it)
                {
                    if(first_idx == -1)
                        first_idx = i;
                    
                    last_idx = i;
                }
            }
            
            
            unordered_set<char> ans;
            for(int i = first_idx+1; i<last_idx; i++)
                ans.insert(s[i]);
            
            res += ans.size();
        }
        
        return res;
    }
};
