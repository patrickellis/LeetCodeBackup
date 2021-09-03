class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int sz = s.size();
        bool dp[sz+1];
        memset(dp, false, sizeof(dp));
        dp[0] = true;
        for(int i = 1; i <= sz; ++i){
            for(int j = i-1; j >= 0; --j){
                if(dp[j]){
                    auto ss = s.substr(j, i-j);
                    if(find(wordDict.begin(), wordDict.end(),ss) != wordDict.end()){
                        dp[i] = true;
                        break;
                    }
                }    
            }
                        
        }        
        return dp[sz];
    }
};