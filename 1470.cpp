class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        int s = nums.size()/2;
        for(int i=0;i<s;i++){
            res.push_back(nums[i]);
            res.push_back(nums[i+s]);
        }
        return res;
    }
};