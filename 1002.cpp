class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int> cnt(26,INT_MAX);
        vector<string> res;
        for(auto& i:A){
            vector<int> cnt1(26,0);
            for(auto& c:i){
                cnt1[c-'a']++;
            }
            for(int i=0;i<26;i++){
                cnt[i] = min(cnt[i],cnt1[i]);
            }
        }
        for(int i=0;i<26;i++){
            for(int j=0;j<cnt[i];j++){
                res.push_back(string(1,'a'+i));
            }
        }    
        return res;
    }
};