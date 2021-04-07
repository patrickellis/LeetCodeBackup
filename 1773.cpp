class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int idx = 0;
        if(ruleKey=="color")idx=1;
        if(ruleKey=="name")idx=2;
        int res=0;
        for(auto& i:items){
            if(i[idx]==ruleValue)res++;
        }
        return res;
    }
};