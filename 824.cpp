class Solution {
public:
    string toGoatLatin(string S) {
        unordered_set<char> vowels({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
        istringstream iss(S);
        string res;
        int curr=1;
        while(iss>>S){
            res+= " "+(vowels.find(S[0])!=vowels.end()? S : S.substr(1)+S[0]) + "ma";
            for(int j=0;j<curr;j++){
                res+='a';
            }
            curr++;
        }
        return res.substr(1);
    }
};