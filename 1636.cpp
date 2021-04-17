class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> M;
        for(auto n:nums){
            M[n]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b){
           return M[a]==M[b] ? a>b : M[a]<M[b];
        });
        return nums;
    }
};