class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        long long dp[amount+1];
        memset(dp, 0, sizeof(dp));
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            dp[i]=INT_MAX;
            for(auto& c:coins){
                if(i-c >= 0) dp[i] = min(dp[i-c]+1, dp[i]);
            }
        }
        return dp[amount]<INT_MAX?dp[amount]:-1;
    }
};