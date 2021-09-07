class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        for(int b = 0; b < (1 << n); b++){
            vector<int> subset;
            for(int i = 0; i < n; ++i){
                if(b&(1<<i)) subset.push_back(nums[i]);    
            }
            result.push_back(subset);
        }
        return result;
    }
};