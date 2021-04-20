class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        return accumulate(nums.begin(), nums.end(),0) - (min * nums.size());
    }
};