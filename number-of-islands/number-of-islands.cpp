class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int result = 0;
        // row and column counts
        int m = grid.size(), n = grid.back().size();
        // queue of currently considered grid squares for DFS
        queue<pair<int,int>> q;
        
        for(int j = 0; j < m; ++j){
            for(int i = 0; i < n; ++i){
                if(grid[j][i] == '1'){
                    q.push({j,i}); // push (row,column) to queue i.e. y,x                                    
                    // conduct DFS on grid[j][i]
                    while(!q.empty()){
                        auto top = q.front(); 
                        q.pop();
                        int y = top.first, x = top.second;
                        
                        if(y < 0 || y >= m || x < 0 || x >= n || grid[y][x] == '0')
                            continue; // if x or y out of bounds, or not island - pop and continue
                        
                        grid[y][x] = '0';
                        q.push({y+1, x});
                        q.push({y, x+1});
                        q.push({y, x-1});
                        q.push({y-1, x});
                    }
                    ++result;
                } 
            }
        }
        return result;
    }
};