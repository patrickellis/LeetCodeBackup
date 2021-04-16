class Solution {
public:
    int cap_pawns(vector<vector<char>>& b, int x,int y, int dx,int dy){
        while(x>=0 && x<b.size() && y>=0 && y<b[0].size()){
            if(b[x][y]!='R' && b[x][y]!='.'){
                if(b[x][y]=='p')return 1;
                else return 0;
            } 
            x+=dx; y+=dy;
        }
        return 0;
    }
    int numRookCaptures(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='R'){
                    int res=0;
                    res+=cap_pawns(board,i,j,1,0);
                    res+=cap_pawns(board,i,j,0,1);
                    res+=cap_pawns(board,i,j,-1,0);
                    res+=cap_pawns(board,i,j,0,-1);
                    return res;
                }
            }
        }
        return -1;        
    }
};