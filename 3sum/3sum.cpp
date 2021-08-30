class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        // sort
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++){            
            // handle duplicates
            if(i > 0 && nums[i] == nums[i-1]) 
                continue;
            // init left and right
            int x = nums[i];
            int l = i + 1;
            int r = nums.size()-1;
            
            while(l < r)
            {
                int curr = x + nums[l] + nums[r];
                if(curr == 0){
                    result.push_back(vector<int>({x, nums[l], nums[r]}));
                    while(l < r && nums[l] == nums[l+1])
                        l++;
                    while(l < r && nums[r] == nums[r-1])
                        r--;
                    l++; r--;  
                }
                else if(curr > 0)
                    r--;
                else
                    l++;
                          
            }
                
        }
        return result;
    }
};