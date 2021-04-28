class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool inc = false;
        bool dec = false;
        if(arr.size() == 1) return false;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i] == arr[i+1]) return false;
            if(arr[i] < arr[i+1]){
                if(dec) return false;
                inc = true;
            }
            else if(arr[i] > arr[i+1]){
                if(!inc)return false;
                dec = true;
            }
        }
        return dec && inc;
    }
};