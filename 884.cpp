#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <set>
#include <sstream>
#include <unordered_map>
using namespace std;
vector<string> uncommonFromSentences(string A, string B) {
        vector<string> res;
        unordered_map<string,int> count;
        istringstream iss(A+" "+B);
        while(iss>>A){
            count[A]++;
        }
        for(auto c : count){
            if(c.second==1) res.push_back(c.first);
        }
        return res;
    }


int main(){
    string A = "this apple is sweet";
    string B = "this apple is sour";
    vector<string> res = uncommonFromSentences(A,B);
    for(auto i : res){       
        cout << i << endl;       
    }
    return 0;
}