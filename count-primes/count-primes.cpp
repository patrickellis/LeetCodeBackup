class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
    
        bool isPrime[n+1];
        memset(isPrime,true,sizeof(isPrime));
        int res = 1; // automatically count 2 as prime
        int upperLim = sqrt(n);
        for(int i=3;i<n;i+=2){
            if(isPrime[i]){
                ++res;
                if(i > upperLim) continue;
                for(int j=i*i;j<=n;j+=i){
                    isPrime[j]=false;
                }
            }    
        }
        return res;
    }
};