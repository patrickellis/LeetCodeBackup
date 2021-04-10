class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        for(int i=1;i<n;i++){
            res.push_back(i);
        }
        res.push_back(-1*accumulate(res.begin(), res.end(),0));
        return res;
    }
};