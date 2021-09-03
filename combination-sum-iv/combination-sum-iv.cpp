class Solution {
public:
    int memo[1001];
    
    int solve(vector<int>& nums, vector<int> combo, int sum, int target){        
        if(sum > target) return 0;
        if(sum == target) return 1;
        if(memo[sum] != -1) return memo[sum];
        int res = 0;
        for(auto n:nums){
            combo.push_back(n);
            res += solve(nums, combo, sum+n, target);
            combo.pop_back();
        }
        memo[sum] = res;
        return res;
    }
    int combinationSum4(vector<int>& nums, int target) {
        memset(memo, -1, sizeof(memo));
        return solve(nums, {}, 0, target);
    }
};