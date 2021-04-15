class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(arr.size()==1){
            return target[0]==arr[0];
        }
        vector<int> V(1001, 0);
        for(int i=0;i<target.size();i++){
            V[target[i]]++;
            V[arr[i]]--;
        }
        for(auto &i:V){
            if(i!=0)return false;
        }
        return true;
    }    
};