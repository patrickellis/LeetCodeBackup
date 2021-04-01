// Your First C++ Program
#include <vector> 
#include <iostream>
#include <map>
#include <cmath>
int odd_count(std::vector<int> nums) {
       int res = 0;
       for(int n : nums){
            res += (int)log10(n)&1;
       }
       return res;
    }

int main() {
    std::vector<int> input = {15,233,23232,1444,9,7};
    int r = odd_count(input);
    std::cout << r << std::endl;
    return 0;
}