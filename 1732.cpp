#include <iostream>
#include <vector>

int largestAltitude(std::vector<int>& gain){
    int current = 0; int max = 0;
    for(int g : gain){
        current += g;
        max = (current > max) ? current : max;
    }
    return max;
}

int main(){
   std::vector<int> altitudes = {12,-5, 13, 6, -2, -11, 10};
   int res = largestAltitude(altitudes);
   std::cout << res << std::endl;
   return 0;
}