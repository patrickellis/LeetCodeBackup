class Solution {
private:
    static bool compareFunc(const string& s1,const string& s2){
        return s1.size()<s2.size();
    }
    
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        sort(words.begin(), words.end(), compareFunc);
        for(int i=0;i<words.size()-1;i++){
            cout << words[i] <<endl;
            for(int j=i+1;j<words.size();j++){
                cout<<words[j] <<endl;
                if(words[j].find(words[i])!=string::npos){
                    res.push_back(words[i]);
                    break;
                }
            }
        }
        return res;
    }
};