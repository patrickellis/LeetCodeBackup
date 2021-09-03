class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int dp[amount+1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for(auto c:coins){
            for(int i = 1; i <= amount; ++i){            
                if(c <= i) dp[i] += dp[i-c];
                
            }
        }
        return dp[amount];
    }
};