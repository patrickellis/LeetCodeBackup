class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        vector<int> res;        
        int sum1=0;
        int sum2=accumulate(nums.begin(), nums.end(),0);
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
            res.push_back(nums[i]);
            sum2-=nums[i];
            if(sum1>sum2) return res;
        }
        return res;
    }
};