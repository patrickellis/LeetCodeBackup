class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        seen = {}
        count = 0
        res = 0
        for index,char in enumerate(s):
            count+=1
            if char not in seen:                
                seen[char] = index                
            else:
                diff = index - seen[char]                                
                count = min(diff,count)
                seen[char] = index
            res = max(res,count)
        return res
