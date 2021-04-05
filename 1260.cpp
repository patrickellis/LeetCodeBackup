class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n=grid[0].size();
        k = k % (m*n);
        vector<vector<int>> res(m,vector(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int pos=i*n+j+k;
                pos = pos % (m*n);
                res[pos/n][pos%n]=grid[i][j];
            }
        }
        return res;
    }
};