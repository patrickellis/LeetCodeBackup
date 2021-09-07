class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftProducts(nums.size(),1);
        vector<int> rightProducts(nums.size(),1);
        int prev = 1;
        for(int i = 0; i < nums.size(); ++i){
            leftProducts[i] = prev;
            prev *= nums[i];            
        }
        prev = 1; // reset var
        for(int i = nums.size()-1; i >= 0; --i){
            rightProducts[i] = prev;
            prev *= nums[i];
        }
        for(int i = 0; i < nums.size(); ++i)
            nums[i] = leftProducts[i] * rightProducts[i];
        
        cout << "leftProducts: " << "\n";
        for(auto n:leftProducts) cout << n << " ";
        cout << "\n" << "rightProducts" << "\n";
        for(auto n:rightProducts) cout << n << " ";
        return nums;
    }
};