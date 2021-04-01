#include <vector> 
#include <iostream>
#include <map>
#include <cmath>

std::string removeOuterParentheses(std::string S){
    std::string res;
    int opened = 0;
    for(char c : S){
        if(c == '(' && opened++ > 0) res += c;
        if(c == ')' && opened-- > 1) res += c;
    }
    return res;
}






int main(){
   std::string S = "(()())((())())";
   std::string res = removeOuterParentheses(S);
   std::cout << res;
   return 0;
}