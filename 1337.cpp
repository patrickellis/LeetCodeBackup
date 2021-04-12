class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>> S;
        for(int i=0;i<mat.size();i++){
            auto p=accumulate(mat[i].begin(), mat[i].end(),0);
            S.insert({p,i});
        }
        vector<int> res;
        for(auto it=S.begin();k>0;k--,it++){
            res.push_back(it->second);
        }
        return res;
    }
};