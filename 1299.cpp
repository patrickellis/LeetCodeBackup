class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max=arr.back(), temp=max;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]>max)temp=arr[i];
            arr[i]=max;
            max=temp;
        }
        arr.back()=-1;
        return arr;
    }
};