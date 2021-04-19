class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto c:s){
            if(stk.empty() || c=='(' || c=='{' || c=='['){
                stk.push(c);
            }
            else{
                if(c==')' && stk.top() != '(') return false;
                if(c=='}' && stk.top() != '{') return false;
                if(c==']' && stk.top() != '[') return false;
                stk.pop();
            }                        
        }
        return stk.empty();
    }
};