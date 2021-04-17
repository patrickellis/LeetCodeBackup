class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> res;
        for(auto& o:ops){
            if(o=="D")res.push_back(res.back()*2);
            else if(o=="C")res.pop_back();
            else if(o=="+")res.push_back(res.back()+res[res.size()-2]);
            else(res.push_back(stoi(o)));
        }
        return accumulate(res.begin(), res.end(), 0);
    }
};