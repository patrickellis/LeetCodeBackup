class Solution {
public:
    string removeVowels(string s) {
        for(auto it=s.begin();it!=s.end();it++){
            auto& c =*it;
            if(c=='a'||c=='e'||c=='i'||c=='u'||c=='o'){
                s.erase(it--);
            }
        }
        return s;
    }
};