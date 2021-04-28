class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int res = 0;
        cost.push_back(0);
        int minCost[cost.size()];
        memset(minCost, 0, sizeof(minCost));
        
        minCost[0] = cost[0];
        minCost[1] = cost[1];
        for(int i=2;i<cost.size();i++){
            minCost[i] = min(minCost[i-1], minCost[i-2]) + cost[i];
        }
        return minCost[cost.size()-1];
    }
};