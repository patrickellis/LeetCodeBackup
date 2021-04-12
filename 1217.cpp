class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even_cost=0;
        int odd_cost=0;
        for(auto& i:position){
            if(i%2==0)even_cost++;
            else odd_cost++;
        }
        return min(even_cost,odd_cost);
    }
};