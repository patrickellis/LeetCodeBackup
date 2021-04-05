class Solution {
public:
    int maxPower(string s) {
        int res = 0;
        char prev = s[0];
        int count = 1;
        for(int i=1;i<s.size();i++){
            if(s[i]==prev){
                count++;
                continue;
            }
            else{
                res = (count > res) ? count : res;
                count = 1;
                prev = s[i];                
            }
        }
        return (count > res) ? count : res;;
    }
};