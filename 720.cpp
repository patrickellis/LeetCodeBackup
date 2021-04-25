class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end());
        string cur;
        string res;
        for(int i=0;i<words.size();i++){
            if(words[i].size() == 1){
                cur = words[i];
                if(res.size() < cur.size())
                    res = cur;                
            }
            else{
                while(cur.size()){
                    if(words[i].size() > cur.size() + 1){
                        break;
                    }
                    if(words[i].size() == cur.size() + 1){
                        if(words[i].substr(0,cur.size())==cur){
                            cur = words[i];
                            if(res.size() < cur.size())
                                res  = cur;                            
                        }                  
                        break;
                    }
                    else{
                        cur.pop_back();
                    }
                }
            }
        }
        return res;
    }
};