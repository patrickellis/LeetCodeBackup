class Solution {
public:
    string longestPalindrome(string s) {
        int sz = s.size();
        if(sz == 1) return s;
        
        // dp array -> dp[i][j] = substring (i,j) is a palindrome
        vector<vector<int>> dp(sz, vector<int>(sz,false));
        
        for(int i = 0; i < sz; ++i)
            dp[i][i] = true; // all substrings (i,i) are palindromic
        
        int maxLen = 0;
        string result = "";
        result += s[0];
        
        for(int i = sz-1; i >= 0; --i){
            for(int j = i + 1; j < sz; ++j){
                if(j - i == 1 || dp[i+1][j-1]){
                    if(s[i] == s[j]){
                        dp[i][j] = true;
                        if(j - i + 1 > result.size()) 
                            result = s.substr(i,j - i + 1);
                    }
                }    
                
            }    
        }
        return result;
    }
};