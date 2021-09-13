class Solution {
public:
    bool isPeak(vector<int>& arr, int pos){
        if(pos == 0 || pos == arr.size()-1)
            return false;
        return arr[pos] > arr[pos-1] && 
            arr[pos] > arr[pos+1];
    }
    bool isIncreasing(vector<int>& arr, int pos){
        if(pos == 0)
            return arr[pos+1] > arr[pos];
        if(pos == arr.size()-1) 
            return arr[pos-1] < arr[pos];
        return arr[pos-1] < arr[pos] 
            && arr[pos] < arr[pos+1];
    }
    
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0, r = arr.size()-1;
        while(l <= r){
            int mp = l + (r-l)/2;
            if(isPeak(arr, mp))
                return mp;
            else if(isIncreasing(arr, mp)){
                l = mp + 1;
            }
            else{
                r = mp - 1;
            }
        }
        return l;
    }
};