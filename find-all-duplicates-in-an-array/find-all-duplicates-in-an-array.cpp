class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(auto n:nums){
            if(nums[abs(n)-1] < 0) 
                result.push_back(abs(n));
            else
                nums[abs(n)-1] *= -1;
        }
        return result;
    }
};