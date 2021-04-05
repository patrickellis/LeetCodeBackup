class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty=0;
        int res=0;
        while(numBottles){
            res+=numBottles;
            empty+=numBottles;
            numBottles=empty/numExchange;
            empty=empty%numExchange;
        }
        return res;
    }
};