class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> ind_B;
        for(int i=0;i<B.size();i++){
            ind_B[B[i]]=i;
        }
        vector<int> res;
        for(auto& i:A){
            res.push_back(ind_B[i]);
        }
        return res;
    }
};