class Solution {
public:
    int largestUniqueNumber(vector<int>& A) {
        short a[1001]={},k;
        for(auto& i:A){
            a[i]++;
        }
        for(k=1000;k>=0&&a[k]!=1;k--);
        return k;
    }
};