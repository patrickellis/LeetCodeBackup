class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int dist = k+1;
        for(auto &n : nums){
            if(n==1){
                if(dist < k)return false;
                dist = 0;
                continue;
            }
            dist++;
        }
        return true;
    }
};