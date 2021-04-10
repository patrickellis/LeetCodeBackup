class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++){
            sum+=mat[i][i];
            sum+=mat[i][mat[0].size()-i-1];
            if(i==mat[0].size()-1-i){
                sum-=mat[i][i];
            }            
        }
        return sum;
    }
};