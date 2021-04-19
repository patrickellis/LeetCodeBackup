class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=INT_MIN, min=INT_MAX;
        for(auto& p:prices){
            min=(p<min)?p:min;
            max=(p-min > max)?p-min:max;
        }
        return max;
    }
};