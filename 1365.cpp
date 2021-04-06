class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> counts(101,0);
        for(auto n:nums){
            counts[n]++;
        }
        counts[counts.size()-1]=accumulate(counts.begin(),counts.end()-1,0);
        for(int i=counts.size()-2;i>=0;i--){
            counts[i]=counts[i+1]-counts[i];
        }
        for(auto& n:nums){
            n=counts[n];
        }
        return nums;
    }
};