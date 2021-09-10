class Solution {
public:
    int singleNumber(vector<int>& nums) {
        bitset<60001> seen;        
        for(auto n:nums){
            seen[n+30000].flip();            
        }
        for(int i = 0; i < 60001; ++i)
            if(seen[i])
                return i-30000;
        return -1;
    }
};