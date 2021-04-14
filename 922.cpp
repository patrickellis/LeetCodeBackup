class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& arr) {
        for(int i=0,j=1;i<arr.size();i+=2,j+=2){
            while(i<arr.size()&&arr[i]%2==0)i+=2;
            while(j<arr.size()&&arr[j]%2==1)j+=2;
            if(i<arr.size())swap(arr[i],arr[j]);
        }
        return arr;
    }
};