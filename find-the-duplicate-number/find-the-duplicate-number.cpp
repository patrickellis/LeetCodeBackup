class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(auto n:nums){
            if(nums[abs(n)] < 0)
                return abs(n);
            else 
                nums[abs(n)] *= -1;
        }
        return -1;
    }
};