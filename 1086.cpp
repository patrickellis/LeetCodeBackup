class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        vector<vector<int>> res;
        map<int,vector<int>> m;
        for(auto& i:items) m[i[0]].push_back(i[1]);
        for(auto& [i,v]:m){
            partial_sort(v.begin(), v.begin()+5,v.end(), greater<int>());
            res.push_back({i,(accumulate(v.begin(), v.begin()+5,0)/5)});            
        }
        return res;
    }
};