class Solution {
public:
    string freqAlphabets(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(i < s.size()-2 && s[i+2]=='#'){
                int s1 = (s[i]-'0')*10+(s[i+1]-'0');
                res+=char(s1+'a'-1);
                i+=2;
            }
            else{
                int s1 = (s[i]-'0')-1;
                res+=char(s1+'a');
            }
        }
        return res;
    }
};