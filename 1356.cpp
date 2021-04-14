class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        auto comp = [](const int& a, const int& b){
            int countA = __builtin_popcount(a), countB = __builtin_popcount(b);
            return(countA==countB)? a<b:countA<countB;
        };
        sort(arr.begin(), arr.end(), comp);
        return arr;
    }    
};