// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l = 1, r = n, mp;
        if(n == 1) return 1;
        while(l < r){
            mp = (l + r)/2;
            if(isBadVersion(mp)){
                r = mp;                
            }
            else{
                l = mp + 1;
            }
        }
        return l;
    }
};