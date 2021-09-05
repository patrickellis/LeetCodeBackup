class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        bitset<100000> seen;
        vector<int> result;
        for(auto n:nums){
            if(seen[n]) result.push_back(n);
            else seen[n] = true;
        }
        return result;
    }
};