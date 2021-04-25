class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        bool seen[nums.size()+1];
        memset(seen,false,sizeof(seen));
        int miss=-1, dup=-1;
        for(int i=0;i<nums.size();i++){
            if(seen[nums[i]])dup=nums[i];
            seen[nums[i]] = true;
        }
        for(int i=1;i<nums.size()+1;i++){
            if(!seen[i]) return {dup,i};
        }
        return {dup,miss};
    }
};