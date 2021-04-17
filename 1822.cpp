class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product=1;
        for(auto i:nums){
            if(i>0){
                continue;
            }
            else if(i==0) return 0;
            else product*=-1;
        }
        return product;
    }
};