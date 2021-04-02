#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

int countPrimeSetBits(int L, int R){
    int count = 0;
    set<int> primes ={2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    for(int i=L;i<=R;i++){
        int num_bits = 0;
        for(int n=i;n;n>>=1){
            num_bits += n&1;
        }
        if(binary_search(primes.begin(), primes.end(), num_bits)) count++;
    }
    return count;
}


int main(){
    int res = countPrimeSetBits(10,15);
    cout << res << endl;       
    return 0;
}