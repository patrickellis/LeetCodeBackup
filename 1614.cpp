class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        int level=0;
        for(auto&c:s){
            if(c=='('){
                max = (++level>max) ? level : max;
            }
            if(c==')') level--;            
        }
        return max;
    }
};