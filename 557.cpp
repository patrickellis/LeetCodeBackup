class Solution {
public:
    string reverseWords(string s) {
        string res;
        istringstream iss(s);
        while(iss>>s){
            reverse(s.begin(), s.end());
            res+= s+" ";
        }
        return res.substr(0,res.size()-1);
    }
};