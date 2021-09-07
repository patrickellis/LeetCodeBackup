class Solution {
public:
    int missingNumber(vector<int>& nums) {
        bitset<10000> seen;
        for(auto n:nums) seen[n]=true;
        for(int i = 0; i <= nums.size(); ++i) 
            if(!seen[i]) return i;
        return -1;
    }
};