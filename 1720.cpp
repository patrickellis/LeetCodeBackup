class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res({first});
        int curr = first;
        for(int i=0;i<encoded.size();i++){
            res.push_back(encoded[i]^curr);
            curr = res.back();
        }
        return res;
    }
};