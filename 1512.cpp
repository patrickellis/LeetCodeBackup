class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res=0;
        unordered_map<int,int> counts;
        for(int& n:nums){
            res += counts[n]++;            
        }
        return res;
    }
};