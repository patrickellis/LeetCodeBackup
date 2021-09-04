class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];
        dp[0] = dp[1] = 1;
        for(int step = 2; step <= n; ++step){
            dp[step] = dp[step-1] + dp[step-2];            
        }
        return dp[n];
    }
};