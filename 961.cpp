class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int> counts;
        for(auto& n:A){
            if(++counts[n]>1) return n;            
        }
        return 0;
    }
};