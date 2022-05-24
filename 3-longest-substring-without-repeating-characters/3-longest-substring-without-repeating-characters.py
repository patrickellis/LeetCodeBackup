class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # worst solution I can think of:
        # n^2 loop
        # for all possible starts
        # calculate the longest possible valid string
        res = 0
        for i in range(len(s)):
            seen = [False for i in range(128)]
            count = 0
            for j in range(i,len(s)):
                if(seen[ord(s[j])]):
                    res = max(res,count)
                    break
                count=count+1
                seen[ord(s[j])]=True
            res = max(res,count)
        return res