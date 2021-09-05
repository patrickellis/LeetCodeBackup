class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int localMax = 0, globalMax = INT_MIN;
        for(auto n:nums){
            localMax = max(localMax + n, n);
            globalMax = max(globalMax, localMax);
        }
        return globalMax;
    }
};