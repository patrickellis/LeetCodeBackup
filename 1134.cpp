class Solution {
public:
    bool isArmstrong(int n) {
        int sum=n;
        int k=log10(n)+1;
        for(int N=n;N;N/=10){
            sum-= pow(N%10,k);
        }
        return sum==0;
    }
};