class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach=0;
        for(int jump = 0; jump < nums.size()-1; jump++){
            if(maxReach < jump) return false;
            maxReach = max(maxReach, jump+nums[jump]);
        }
        cout << maxReach;
        return maxReach >= nums.size()-1;        
    }
};