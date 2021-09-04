class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums.back();
        if(n == 2) return max(nums[0],nums[1]);
        
        int dp[n];
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        dp[2] = max(dp[1],nums[2]+dp[0]);
        for(int i = 3; i < n; ++i){
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);    
        }
        return max(dp[n-1], dp[n-2]);
    }
};