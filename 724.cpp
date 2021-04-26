class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int deleted = 0;
        for(int i=0;i<nums.size();i++){
            total -= nums[i];
            if(total == deleted) return i;
            deleted += nums[i];
        }
        return -1;
    }
};