class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> even;
        vector<int> odd;
        for(auto& n:A){
            if(n&1)odd.push_back(n);
            else even.push_back(n);            
        }
        even.insert(even.end(),odd.begin(), odd.end());
        return even;
    }
};