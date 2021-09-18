class Solution {

public:    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 1;
        priority_queue<pair<int,int>> vals;
        for(int i = 0; i < nums.size(); ++i){
            if(i == nums.size()-1){
                vals.push(make_pair(1, nums[i]));
                break;
            }
            while(i < nums.size()-1 && nums[i] == nums[i+1]){
                i++;
                count++;
            }
            cout << "pushing " << nums[i] << " onto priority queue with count: " << count << "\n";
            vals.push(make_pair(count,nums[i]));
            count = 1;
        }
        vector<int> result;
        while(k--){
            auto top = vals.top();
            vals.pop();
            result.push_back(top.second);
        }
        return result;
    }
};