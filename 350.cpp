class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> M;
        for(auto i:nums1){
            M[i]++;
        }
        for(auto i:nums2){
            if(M[i]-- > 0){
                res.push_back(i);
            }
        }
        return res;
    }
};