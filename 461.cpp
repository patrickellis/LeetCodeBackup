class Solution {
public:
    int hammingDistance(int x, int y) {
        int xy_xor = x^y;
        int res=0;
        for(int i=xy_xor;i;i>>=1){
            res+=i&1;
        }
        return res;
    }
};