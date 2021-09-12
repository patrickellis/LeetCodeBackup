class Solution {
public:
    void formString(string& oldString, string& newString, int size){
        for(int i = 0; i < size; ++i){
            if(oldString[i] == '#'){
                if(newString.empty())
                    continue;
                else 
                    newString.pop_back();
            }
            else{
                newString.push_back(oldString[i]);
            }
        }        
    }
    bool backspaceCompare(string s, string t) {
        string s_new = "", t_new = "";
        int size = s.size();
        formString(s, s_new, size);
        size = t.size();
        formString(t, t_new, size);
        return s_new == t_new;
    }
};