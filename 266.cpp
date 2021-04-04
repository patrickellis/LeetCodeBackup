class Solution {
public:
    bool canPermutePalindrome(string s) {
        unordered_map<char,int> count;
        for(auto c:s){
            count[c]++;
        }
        int odd = 0;
        for(auto c:count){
            odd+=int(c.second&1);        
        }
        return(odd<2);
    }
};