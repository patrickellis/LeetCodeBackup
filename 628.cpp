class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max3 = INT_MIN, max2 = INT_MIN, max1 = INT_MIN;
        int min2 = INT_MAX, min1 = INT_MAX;
        for(auto n:nums){
            if(n > max1){
                max3 = max2;
                max2 = max1;
                max1 = n;                
            }
            else if(n > max2){
                max3 = max2;
                max2 = n;
            }
            else if(n > max3){
                max3 = n;
            }
            if(n < min1){
                min2 = min1;
                min1 = n;
            }
            else if(n < min2){
                min2 = n;
            }
        }
        return max(max3*max2*max1, min2 * min1 * max1);
    }
};