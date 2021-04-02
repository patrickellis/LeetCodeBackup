#include <vector>
#include <iostream>
using namespace std;

bool threeConsecutiveOdds(vector<int> & arr){
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]&1)count++;
        else count=0;
        if(count==3)return true;
    }
    return false;
}


int main(){
    vector<int> input = {1,2,34,3,4,5,7,23,12};
    if(threeConsecutiveOdds) cout << "Input contains 3 consecutive odd numbers" << endl;       
    return 0;
}