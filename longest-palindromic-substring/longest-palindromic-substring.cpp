class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        // base case, empty string
        if(n==0) return "";
        // size 1, return only character in string
        if(n==1) return s;
        
        // dp array -> dp[i][j] = substring s(i,j) is a palindrome
        bool dp[n][n];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<n;i++)
            dp[i][i]=true; // all substring length 1 are palindromes
        
        // initialise ans with first character,
        // we know this is a valid palindrome of length 1
        string ans = "";
        ans+=s[0];
        
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                   if(j-i==1 || dp[i+1][j-1]){
                        dp[i][j]=true;
                        if(j-i+1 > ans.size())
                            ans = s.substr(i,j-i+1);
                    } 
                }
                
            }    
        }
        return ans;
    }
};