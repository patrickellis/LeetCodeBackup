class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<string>> B(3,vector<string>(3," "));
        string move = "A";
        for(auto m:moves){
            B[m[0]][m[1]] = move;
            if(move == "A") move = "B";
            else move = "A";
        }
        for(int i=0;i<3;i++){
            if(B[i][0] == B[i][1] && B[i][1] == B[i][2] && B[i][2] != " ") return B[i][0];
            if(B[0][i] == B[1][i] && B[1][i] == B[2][i] && B[2][i] != " ") return B[0][i];
        }
        if(B[0][0] == B[1][1] && B[1][1] == B[2][2] && B[2][2] != " ") return B[0][0];
        if(B[0][2] == B[1][1] && B[1][1] == B[2][0] && B[2][0] != " ") return B[1][1];
        return(moves.size() == 9)?"Draw":"Pending"; 
    }
};