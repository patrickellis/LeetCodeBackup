#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

 vector<int> distributeCandies(int candies, int num_people) {
        int candy_copy = candies;
        int rounds=0;
        vector<int> res(num_people, 0);
        while(candy_copy>0){
            int extra = num_people * rounds;
            for(int i=0;i<num_people;i++){
                candy_copy -= (i+1+extra);
            }
        
            if(candy_copy>=0) rounds++;
        }
        
        for(int i=0;i<rounds;i++){
            int extra = num_people * i;
            for(int j=0;j<num_people;j++){
                res[j]+=extra+j+1;
                candies-=(extra+j+1);
            }
        }
        
        for(int j=0;j<num_people;j++){
            int alloc = rounds * num_people + j + 1;
            if(candies>alloc){
                candies-=alloc;
                res[j]+=alloc;
            }
            else{
                res[j]+=candies;
                break;
            }
        }
        return res;

    }


int main(){
    vector<int> res = distributeCandies(7,4);
    for(auto i : res){       
        cout << i << endl;       
    }
    return 0;
}