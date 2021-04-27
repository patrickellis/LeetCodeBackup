class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min = INT_MAX;
        int runningSum = 0;
        for(auto n:nums){
            runningSum += n;
            min = runningSum < min ? runningSum : min;
        }
        return(min>0)?1:abs(min)+1;
    }
};