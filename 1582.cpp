#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
using namespace std;

int numSpecial(vector<vector<int>>& arr){
    vector<int> rows(arr.size()), cols(arr[0].size());
    int res = 0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(arr[i][j]==1){
                rows[i]++;
                cols[j]++;
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(arr[i][j]==1&&rows[i]==1&&cols[j]==1)res++;
        }
    }
    return res;
            
}


int main(){
    vector<vector<int>> input = {{1,0,0},
                                {0,1,0},
                                {0,0,1}};
    int res = numSpecial(input);
    cout << res << endl;       
    return 0;
}