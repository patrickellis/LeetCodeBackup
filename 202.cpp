class Solution {
private:
    int getSumSqDigits(int n){
        int sum=0;
        for(int i=n;i;i/=10){
            sum+=pow(i%10,2);
        }
        return sum;        
    }
public:    
    bool isHappy(int n) {
        bool hist[800] = {false};
        while(n!=1){
            n = getSumSqDigits(n);
            if(hist[n])return false;
            hist[n]=true;
        }
        return true;
    }
};