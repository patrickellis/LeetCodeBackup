class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {        
        unsigned int dp[target+1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for(int i = 0; i < target; ++i){
            if(!dp[i]) continue;
            for(auto n:nums){
                if(n + i <= target) dp[i+n]+=dp[i];
            }    
        }
        return dp[target];
    }
};