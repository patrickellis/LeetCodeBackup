class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q1(stones.begin(),stones.end());
        while(q1.size()>1){
            int s1 = q1.top(); q1.pop();
            int s2 = q1.top(); q1.pop();
            if(s1!=s2){
                q1.push(abs(s1-s2));
            }
        }
        if(q1.size()) return q1.top();
        return 0;
    }
};