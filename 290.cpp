class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int> p2i;
        unordered_map<string,int> w2i;
        int idx=0;
        int psize = pattern.size();
        istringstream iss(s);
        while(iss>>s){
            if(idx >= psize || p2i[pattern[idx]]!=w2i[s]){
                return false;
            }
            p2i[pattern[idx]] = w2i[s] = idx + 1;
            idx++;            
        }
        return idx == psize;
    }
};