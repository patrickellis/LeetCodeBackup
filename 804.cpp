#include <iostream>
#include <vector>
#include <set>
using namespace std;
int uniqueMorseRepresentations(std::vector<std::string>& words){
    std::vector<std::string> code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    std::set<std::string> morse_words;
    for(string w : words){
        string morse_word;
        for(char c : w){
            morse_word += code[c - 'a'];           
        }
        if(morse_words.find(morse_word) == morse_words.end()){
            morse_words.insert(morse_word);
        }
    }
    return morse_words.size();
}

int main(){
   std::vector<std::string> words = {"gin", "zen", "gig", "msg"};
   int res = uniqueMorseRepresentations(words);
   cout << res << endl;
   return 0;
}