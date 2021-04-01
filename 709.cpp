#include <iostream>

std::string toLowerCase(std::string S){
    for(char & c : S){
        if('A' <= c && c <= 'Z'){
            c = c - 'A' + 'a';
        }        
    }
    return S;
}

int main(){
   std::string S = "UPPERCASE";
   std::string res = toLowerCase(S);
   std::cout << res << std::endl;
   return 0;
}