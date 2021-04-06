class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int max = *max_element(candies.begin(), candies.end());
        for(auto c:candies){
            res.push_back(c+extraCandies>=max);
        }
        return res;
    }
};