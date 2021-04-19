class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int cnt[26]={};
        for(int i=0;i<order.size();i++){
            cnt[order[i]-'a'] = i;
        }
        for(auto& w:words){
            for(auto& c:w){
                c = cnt[c-'a'];   
            }
        }
        return is_sorted(words.begin(), words.end());
    }
};