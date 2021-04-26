class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        bool seen[nums.size()+1];
        memset(seen, false, sizeof(seen));
        for(auto n:nums){
            seen[n]=true;
        }
        vector<int> res;
        for(int i=1;i<nums.size()+1;i++){
            if(!seen[i])res.push_back(i);
        }
        return res;
    }
};