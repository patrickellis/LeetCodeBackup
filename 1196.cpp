class Solution {
public:
    int maxNumberOfApples(vector<int>& arr) {
        sort(arr.begin(), arr.end(),greater<int>());
        int res=0, weight=0;
        while(weight<5000&&arr.size()>0){
            res++;
            weight+=arr.back();arr.pop_back();
        }
        return(weight>5000)?--res:res;
    }
};