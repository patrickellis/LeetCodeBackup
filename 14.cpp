class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = INT_MAX;
        for(auto& i:strs){
            min = (i.size() < min)?i.size():min;   
        }
        string res;
        if(strs.size()==0 || min==0) return res;
        for(int i=0;i<min;i++){
            char prev = strs[0][i];   
            for(auto& s:strs){
                if(s[i]!=prev) return res;
            }
            res+=strs[0][i];
        }
        return res;
    }
};