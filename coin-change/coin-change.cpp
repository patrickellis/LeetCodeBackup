class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        unsigned int dp[amount+1];
        dp[0] = 0;
        for(int i = 1; i <= amount; ++i){
            dp[i] = INT_MAX;
            for(auto c:coins){
                if(c <= i) dp[i] = min(dp[i],dp[i-c]+1);
            }    
        }
        return dp[amount]<INT_MAX?dp[amount]:-1;
    }
};