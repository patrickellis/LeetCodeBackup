class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int L=0,R=nums.size()-1;
        vector<int> res(nums.size(),0);
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[L])>abs(nums[R])){
                res[i] = nums[L]*nums[L++];
            }    
            else{
                res[i] = nums[R]*nums[R--];                
            }           
        }
        return res;
    }
};