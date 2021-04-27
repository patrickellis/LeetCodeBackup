class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
        int left = 0, right = A.size()-1;
        while(left < right){
            if(A[left] + A[right] == target) return {left+1, right+1};
            if(A[left] + A[right] > target){
                right--;                
            }
            else{
                left++;
            }
        }
        return {};
    }
};