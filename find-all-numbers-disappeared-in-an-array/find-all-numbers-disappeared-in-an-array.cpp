class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(auto n:nums)
            if (nums[abs(n)-1] > 0)
                nums[abs(n)-1]*=-1;
        
        vector<int> result;
        for(int i = 0; i < nums.size(); ++i) if(nums[i] > 0) result.push_back(i+1);
        return result;
    }
};