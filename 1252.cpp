class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> res(m,vector(n,0));
        for(auto& ind:indices){
            for(int i=0;i<m;i++){
                res[i][ind[1]]++;
            }
            for(int i=0;i<n;i++){
                res[ind[0]][i]++;
            }
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                count+=(res[i][j]&1);
            }
        }
        return count;
    }
};