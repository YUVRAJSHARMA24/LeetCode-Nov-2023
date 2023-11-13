class Solution {
public:
    string sortVowels(string s) {
        string vowel = "";
        for(auto &ch : s)
        {
           if(ch == 'A' || ch == 'a' || 
              ch == 'E' || ch == 'e' || 
              ch == 'I' || ch == 'i' || 
              ch == 'O' || ch == 'o' || 
              ch == 'U' || ch == 'u'){
               vowel += ch;
           }
        }
        
        sort(vowel.begin(), vowel.end());
        int j = 0;
        string res = "";
        for(auto &i : s)
        {
            if(i == 'A' || i == 'a' || 
               i == 'E' || i == 'e' || 
               i == 'I' || i == 'i' || 
               i == 'O' || i == 'o' || 
               i == 'U' || i == 'u')
            {
                res += vowel[j];
                j++;
            }
            else
                res += i;
        }
        
        return res;
    }
};
