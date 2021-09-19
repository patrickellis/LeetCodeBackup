class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> M;
        int i = 0;
        for(auto e:edges){
            if(M.find(e[0])==M.end()) i++;
            if(M.find(e[1])==M.end()) i++;
            M[e[0]]++;
            M[e[1]]++;
        }
        printf("value of i is %d",i);
        for(auto& [k,v]:M){
            printf("node %d seen %d times \n",k,v);
            if(v == i-1) return k;
        }
        return -1;
    }
};