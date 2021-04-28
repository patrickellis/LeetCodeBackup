class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<string> res;
        if(nums.empty()){
            if(lower==upper) return {to_string(lower)};
            else{
                return {to_string(lower) + "->" + to_string(upper)};
            }
        }
        if(nums[0] != lower){
            if(nums[0]-lower >1){
                res.push_back(to_string(lower)+"->"+to_string(nums[0]-1));
            }
            else{
                res.push_back(to_string(lower));
            }            
        }
        int start = nums[0];
        int missStart = 0; 
        bool findRange = false;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]+1){
                if(nums[i]-nums[i-1]==2){
                    res.push_back(to_string(nums[i]-1));
                }
                else{
                    res.push_back(to_string(nums[i-1]+1) + "->" + to_string(nums[i]-1));
                }
            }
        }
        if(nums.back() != upper){
            if(upper - nums.back() == 1){
                res.push_back(to_string(upper));
            }
            else{
                res.push_back(to_string(nums.back()+1) + "->" + to_string(upper));
            }
        }
        return res;
    }
};