#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int distributeCandies(vector<int>& c){
    return min(unordered_set<int>(c.begin(),c.end()).size(),c.size()/2);
}


int main(){
    vector<int> candyType = {1,1,2,2,3,3};
    int res = distributeCandies(candyType);
    cout << res << endl;       
    return 0;
}