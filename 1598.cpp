#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int minOperations(vector<string>& ops){
    int level = 0;
    for(auto o : ops){
        if(o=="../"){
            if(level>0)
                level--;
            continue;
        }
        if(o!="./")level++;        
    }
    return level;
}


int main(){
    vector<string> logs = {"d1/","d2/","../","d21/","./"};
    int res = minOperations(logs);
    cout << res << endl;       
    return 0;
}