class Solution {
public:
    string reformatNumber(string number) {
        int n = number.size();
        string ans = "";
        for(auto ch : number)
        {
            if(ch == ' ' || ch == '-')
                continue;
            else 
                ans += ch;
        }
        
        int size = ans.size();
        string res = "";
        int i = 0;
        
        while(i < size)
        {
            if(size - i > 4)
            {
                res += ans.substr(i, 3);
                res += '-';
                i += 3;
            }
            
            if(size - i == 4)
            {
                res += ans.substr(i, 2);
                res += '-';
                i += 2;
            }
            
            if(size - i == 3)
            {
                res += ans.substr(i, 3);
                i += 3;
            }
            
            if(size - i == 2)
            {
                res += ans.substr(i, 2);
                i += 2;
            }
        }
        
        return res;
    }
};
