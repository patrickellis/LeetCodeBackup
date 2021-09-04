class Solution {
public:
    int solve(vector<int>& nums, int start, int end){
        int excl = 0, incl = 0;
        for(int i = start; i < end; ++i){
            int temp = max(incl, excl);
            incl = excl + nums[i];    
            excl = temp;
        }
        return max(excl,incl);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums.back();
        if(n == 2) return max(nums[0], nums[1]);
        
        return max(solve(nums,1,n),solve(nums,0,n-1));
    }
};