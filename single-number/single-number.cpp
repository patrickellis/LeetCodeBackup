class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int temp = 0;
        for(auto i:nums){
            temp ^= i;
        }
        return temp;
    }
};