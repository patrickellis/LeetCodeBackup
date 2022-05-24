class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # for each character, store the last index
        # we saw it at, and use this to calculate the 
        # max valid string possible between that index and this index
        seen = {}
        count = 0
        res = 0
        for index,char in enumerate(s):
            count=count+1
            if char not in seen:                
                seen[char] = index                
            else:
                # when we hit a seen character
                # we have two valid strings:
                # the one that ends at this character
                # and the one that begins one after the previous
                # location of this character
                # we update res with the bigger one
                # and update count with the second one
                # and continue
                diff = index - seen[char]                                
                count = min(diff,count)
                seen[char] = index
            res = max(res,count)
        return res
