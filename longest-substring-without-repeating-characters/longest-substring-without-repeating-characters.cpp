class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1) return s.size();
        int dict[128];
        int maxLen=0, start=-1;
        memset(dict, -1, sizeof(dict));
        
        for(int i=0; i<s.size(); i++){
            if(dict[s[i]] > start){
                start=dict[s[i]];
            }
            maxLen = max(maxLen, i-start);
            dict[s[i]] = i;
        }
        return maxLen;
    }
};