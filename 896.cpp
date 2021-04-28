class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool inc = false, dec = false;
        for(int i=0;i<A.size()-1;i++){
            if(A[i] == A[i+1]) continue;
            if(A[i] < A[i+1]){
                inc = true;
                if(dec) return false;
            }
            if(A[i] > A[i+1]){
                dec = true;
                if(inc) return false;
            }
        }
        return true;
    }
};