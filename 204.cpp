class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        int sum =1;
        int upper = sqrt(n);
        vector<bool> seen(n,false);
        for(int i=3;i<n;i+=2){
            if(!seen[i]){
                sum++;
                if(i>upper) continue;
                for(int j=i*i;j<n;j+=i){
                    seen[j]=true;
                }
            }
        }
        return sum;
    }
};