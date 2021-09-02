class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = 0;
        for(auto i = 0; i < nums.size() && len >= i; i++){
            len = max(len, i + nums[i]);
        }
        return nums.size() <= len + 1;
    }
};