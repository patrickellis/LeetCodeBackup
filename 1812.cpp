class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int c1=coordinates[0]-'a'+1, c2=coordinates[1];
        if(c2&1){
            if(c1&1){
                return false;                
            }
            return true;
        }
        if(c1&1){
            return true;
        }
        return false;
        
    }
};