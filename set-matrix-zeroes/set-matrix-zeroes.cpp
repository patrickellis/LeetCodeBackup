class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // track rows & cols with 0's in them
        vector<bool> rows(matrix.size(), false);
        vector<bool> cols(matrix[0].size(), false);
        for(int i = 0; i < matrix.size(); ++i){
            for(int j = 0; j < matrix[i].size(); ++j){
                if(matrix[i][j] == 0){
                    rows[i] = true;
                    cols[j] = true;
                    // update vectors to keep track of
                    // rows & cols where we  have found
                    // 0's
                }
            }
        }
        // for each row containing a zero, update all elements
        // to zero
        for(int i = 0; i < matrix.size(); ++i){
            if(rows[i]){
                for(int j = 0; j <matrix[i].size(); ++j){
                    matrix[i][j] = 0;
                }
            }
        }
        // for each column containing a zero, update all elements
        // to zero
        for(int j = 0; j < matrix[0].size(); j++){
            if(cols[j]){
                for(int i = 0; i < matrix.size(); ++i){
                    matrix[i][j] = 0;    
                }
            }    
        }
    }
};