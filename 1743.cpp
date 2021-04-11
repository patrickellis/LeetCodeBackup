class Solution {
private:
    static int sumdigits(int& n){
        int sum=0;
        for(int i=n;i;i/=10){
            sum+=i%10;
        }
        return sum;
    }
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> boxes(46,0);
        for(int i=lowLimit;i<=highLimit;i++){
            boxes[sumdigits(i)]++;
        }
        int max=0;
        for(auto& b:boxes){
            max = (b>max)?b:max;
        }
        return max;
    }
};