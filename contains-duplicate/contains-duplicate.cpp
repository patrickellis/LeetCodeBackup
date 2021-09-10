class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> S;
        for(auto n:nums)
            if(S.insert(n).second == false) return true;
        return false;
    }
};