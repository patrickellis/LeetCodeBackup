class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int> M;
        for(auto& cp:cpdomains){
            int i=cp.find(" ");
            int n=stoi(cp.substr(0,i));
            string s=cp.substr(i+1);
            M[s]+=n;
            for(int i=0;i<s.size();i++){
                if(s[i]=='.'){
                    M[s.substr(i+1)]+=n;
                }
            }            
        }
        vector<string> res;
        for(auto& [i,v]:M){
            res.push_back((to_string(v)+" "+i));
        }
        return res;
    }
};