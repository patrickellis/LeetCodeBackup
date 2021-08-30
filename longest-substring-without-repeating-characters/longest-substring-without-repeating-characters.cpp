class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int best=0,current=0;
        int cnt[128];
        int lastStart=0;
        memset(cnt,-1,sizeof(cnt));
        for(int i=0;i<s.size();i++){
            if(cnt[s[i]]==-1){
                cnt[s[i]]=i;
                current++;
            }
            else{                
                current=min(i-(cnt[s[i]]),i-lastStart);
                cnt[s[i]]=i;
                lastStart=i-current;
            }
            cout << "char: " << s[i] << ", current: " << current << "\n";
            //cout << "i: " << i << ",cnt[s[i]]: " << i-cnt[s[i]]+1 << "\n";
            best = max(best,current);
        }
        return best;
    }
};