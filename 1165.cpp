class Solution {
public:
    int calculateTime(string keyboard, string word) {
        unordered_map<char,int> indices;
        for(int i=0;i<keyboard.size();i++){
            indices[keyboard[i]]=i;
        }
        int res=0;
        int prev=0;
        for(auto& c:word){
            res+=abs(indices[c]-prev);
            prev = indices[c];
        }
        return res;
    }
};