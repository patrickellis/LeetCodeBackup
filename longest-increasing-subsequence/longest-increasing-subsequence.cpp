class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(); 
        int dp[n]; // dp[i] = longest subsequence that ends at index i;
        for(int i = 0; i < n; ++i) dp[i] = 1;
        
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < i; ++j){
                if(nums[i] > nums[j] && dp[i] < dp[j]+1)
                    dp[i] = dp[j]+1;
            } 
        }
        
        return *max_element(dp, dp + sizeof(dp)/sizeof(dp[0]));
    }
};