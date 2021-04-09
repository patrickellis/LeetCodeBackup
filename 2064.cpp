class Solution {
public:
    int fixedPoint(vector<int>& arr) {
        int L=0,R=arr.size()-1,mp;
        while(L<R){
            mp=(L+R)/2;
            if(arr[mp]<mp){
                L=mp+1;
            }
            else{
                R=mp;
            }
        }
        return (arr[L]==L) ? L : -1;
    }
};