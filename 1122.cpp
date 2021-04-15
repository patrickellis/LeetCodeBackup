class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> V(1001,0);
        for(auto& i:arr1)V[i]++;
        vector<int> res;
        for(auto& i:arr2){
            for(int j=0;j<V[i];j++){
                res.push_back(i);
            }
            V[i]=0;
        }
        for(int i=0;i<V.size();i++){
            if(V[i]>0){
                for(int j=0;j<V[i];j++){
                    res.push_back(i);
                }
            }
        }
        return res;
    }
};