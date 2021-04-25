class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int start[110];
        memset(start,-1,sizeof(start));
        for(int i=0;i<pieces.size();i++)start[pieces[i][0]]=i;
        for(int i=0;i<arr.size();){
            if(start[arr[i]]>=0){
                int j = start[arr[i]];
                for(int k=0;k<pieces[j].size();k++){
                    if(pieces[j][k]!=arr[i]) return false;
                    i++;
                }
            }
            else return false;
        }
        return true;
    }
};