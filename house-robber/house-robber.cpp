class Solution {
public:
    int rob(vector<int>& nums) {
        int sz = nums.size();
        // base cases
        if(sz==1) return *begin(nums);
        if(sz==2) return *max_element(nums.begin(),nums.end());
        // dp array, dp[i] max possible by house i
        int dp[sz];
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        
        for(int i = 2; i < sz; ++i){
            dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
        }
        for(int i=0;i<sz;i++) cout << dp[i] << " ";
        return max(dp[sz-1],dp[sz-2]);
    }
};