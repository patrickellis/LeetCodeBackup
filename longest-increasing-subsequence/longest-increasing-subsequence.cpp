class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> LIS;
        
        for(int i = 0; i < nums.size(); ++i){
            if(LIS.empty() || LIS.back() < nums[i]){
                LIS.push_back(nums[i]);
            }       
            else{
                auto it = lower_bound(LIS.begin(), LIS.end(),nums[i]);
                *it = nums[i];
            }
        }
        return LIS.size();
    }
};