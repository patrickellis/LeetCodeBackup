class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while(l <= r){
            int mp = l + (r-l)/2;
            if(nums[mp] == target) return mp;
            if(nums[mp] < target){
                l = mp + 1;
            }
            else{
                r = mp - 1;
            }
        }
        return -1;
    }
};