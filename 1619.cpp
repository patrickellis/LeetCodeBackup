#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
using namespace std;

double trimMean(vector<int>& arr){
    auto first = arr.begin() + arr.size() / 20;
    auto second = arr.end() - arr.size() / 20;
    nth_element(arr.begin(), first, arr.end());
    nth_element(first, second, arr.end());
    return(accumulate(first, second, 0.0) / distance(first,second));
}


int main(){
    vector<int> input = {6,2,7,5,1,2,0,3,10,2,5,0,5,5,0,8,7,6,8,0};
    double res = trimMean(input);
    cout << res << endl;       
    return 0;
}