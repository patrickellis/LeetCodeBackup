#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
int numberOfMatches(int n){
    int res = 0;
    while(n > 1){
        if(int(n&1)){
            res += (n-1)/2;
            n = (n-1)/2 + 1;
        }
        else{
            res += n/2;
            n = n/2;
        }
    }
    return res;
}

int main(){
   int res = numberOfMatches(165);
   cout << res << endl;
   return 0;
}