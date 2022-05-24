class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        seen = [-1 for i in range(128)]
        count = 0
        res = 0
        for index,char in enumerate(s):
            count+=1
            if seen[ord(char)]==-1:                
                seen[ord(char)] = index                
            else:
                diff = index - seen[ord(char)]                                
                count = min(diff,count)
                seen[ord(char)] = index
            res = max(res,count)
        return res
