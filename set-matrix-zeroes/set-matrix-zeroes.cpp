class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> rows(matrix.size(),false);
        vector<bool> cols(matrix[0].size(), false);
        for(int i = 0; i < matrix.size(); ++i){
            for(int j = 0; j < matrix[i].size(); ++j){
                if(matrix[i][j] == 0){
                    rows[i] = true;
                    cols[j] = true;
                }
            }
        }
        for(int r = 0; r < rows.size(); ++r){
            if(rows[r]){
                fill(matrix[r].begin(), matrix[r].end(),0);
            }
        }
        for(int c = 0; c < cols.size(); ++c){
            if(cols[c]){
                for(int i = 0; i < matrix.size(); ++i){
                    matrix[i][c] = 0;    
                }    
            }
        }        
    }
};