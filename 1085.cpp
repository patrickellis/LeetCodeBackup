class Solution {
public:
    int sumOfDigits(vector<int>& A) {
        int min = *min_element(A.begin(), A.end());
        int sum=0;
        cout << min;
        for(int n=min;n;n/=10){
            sum+=n%10;            
        }
        return (sum&1)?0:1;
    }
};