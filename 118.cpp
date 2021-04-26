class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        if(numRows == 1) return res;
        res.push_back({1,1});
        if(numRows == 2) return res;
        
        for(int i=2;i<numRows;i++){
            res.push_back(vector<int>(i+1,0));
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) res[i][j] = 1;
                else{
                   res[i][j] = res[i-1][j] + res[i-1][j-1];
                }
            }
        }
        return res;
    }
};