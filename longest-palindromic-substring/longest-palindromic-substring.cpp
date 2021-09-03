class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 2) return s;
        int currMax = 0;
        int l_ind = 0;
        int r_ind = 0;
        
        int i = 0, n = s.size();
        while(i < n){
            int l = i, r = i;
            while(r < n && s[r] == s[r+1]) r++;
            i = r + 1; // skip duplicates;
            while(l > 0 && r < n - 1 && s[l-1] == s[r+1])
            {
                l--;
                r++;                
            }
            int currLen = r - l + 1;
            if(currLen > currMax){
                currMax = currLen;
                l_ind = l;
                r_ind = r;
            }
        }
        return s.substr(l_ind, r_ind - l_ind + 1);
    }
};