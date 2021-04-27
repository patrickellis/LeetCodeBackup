class Solution {
public:
    vector<string> summaryRanges(vector<int>& A) {
        vector<string> res;
        if(A.empty()) return res;
        if(A.size() == 1){
            res.push_back(to_string(A[0]));
            return res;            
        }
        int start =A[0];
        for(int i=1;i<A.size();i++){
            if(A[i] != A[i-1]+1){
                if(start == A[i-1]){
                    res.push_back(to_string(start));
                }
                else res.push_back(to_string(start)+"->"+to_string(A[i-1]));
                start = A[i];
            }
            if(i==A.size()-1){
                if(start == A[i]){
                    res.push_back(to_string(A[i]));
                }
                else{
                    res.push_back(to_string(start) + "->" + to_string(A[i]));
                }
            }
        }
        return res;
    }
};