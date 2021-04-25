class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> M;
        for(auto c:s)M[c]++;
        int res = s.size();
        int odd = 0;
        for(auto& [k,v]:M){
            if(v%2==1)odd++;
        }
        return(odd==0)? res : res-(odd-1);
    }
};