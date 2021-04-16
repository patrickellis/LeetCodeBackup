class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res=0;
        int s=chars.size();
        vector<int> cnt(26,0);
        for(auto& c:chars){
            cnt[c-'a']++;
        }
        bool flag=true;
        for(auto& w:words){
            if(w.size()>s)continue;
            vector<int> cnt1(26,0);
            for(auto& c:w){
                cnt1[c-'a']++;
            }
            flag=true;
            for(int i=0;i<26;i++){
                if(cnt[i]<cnt1[i]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                res+=w.size();
            }
        }
        return res;
    }
};