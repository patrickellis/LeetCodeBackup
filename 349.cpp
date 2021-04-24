class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> S(nums1.begin(), nums1.end());
        vector<int> res;
        
        for(auto i:nums2){
            if(S.erase(i)>0){
                res.push_back(i);
            }    
        }
        return res;
    }
};