class Solution:
    def longestPalindrome(self, s: str) -> str:
        res = 0
        res_string = ""
        n = len(s)
        i = 0
        while(i < n):
            l = i
            r = i
            while(r < n-1 and s[r] == s[r+1]): 
                r+=1
            i=r+1
            if(s[r]!=s[l]):
                continue
            while(l > 0 and r < n - 1 and s[l-1] == s[r+1]):
                l-=1
                r+=1
            print("loop i: %s, l: %s, r: %s" % (i,l,r))
            if(r - l + 1 > res):
                res = r - l + 1
                res_string = s[l:r+1]            
        print(res)
        return res_string
            
            