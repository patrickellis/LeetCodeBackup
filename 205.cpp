class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char arr_s[128] = {};
        char arr_t[128] = {};
        for(int i=0;i<s.size();i++){
            if(arr_s[s[i]]!=arr_t[t[i]]) return false;
            arr_s[s[i]]=i+1;
            arr_t[t[i]]=i+1;
        }
        return true;
    }
};