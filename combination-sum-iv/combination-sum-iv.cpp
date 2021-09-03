class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        long dp[target + 1];
		long tmp;
		dp[0] = 1;
		sort(nums.begin(), nums.end());
		for (int i = 1; i <= target; i++) {
			dp[i] = 0;
			for (int num: nums) {
				if (i < num) break;
				tmp = dp[i] + dp[i-num];
				if (tmp >= INT_MAX) {
					dp[i] = 0;
					break;
				}
				dp[i] = tmp;
			}
		}
		return (int) dp[target];
    }
};