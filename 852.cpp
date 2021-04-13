class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int prev=INT_MIN;
        
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]<prev) return i+1;
            prev=arr[i];
        }
        return -1;
    }
};