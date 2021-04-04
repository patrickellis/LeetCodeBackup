class Solution {
public:
    vector<int> largestSubarray(vector<int>& nums, int k) {
        auto max = max_element(nums.begin(), nums.end()-k+1);
        return vector<int>(max, max+k);
    }
};