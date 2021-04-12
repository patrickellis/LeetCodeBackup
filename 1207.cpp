class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_set<int> S;
        unordered_map<int,int> M;
        for(auto& n:arr){
            M[n]++;
        }
        for(auto& [i,v]:M){
            if(S.insert(v).second==false)return false;
        }
        return true;        
    }
};