class Solution {
public:
    bool halvesAreAlike(string s) {
        int count=0;
        int n=s.size()/2;
        unordered_set<char> vowels{'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<n*2;i++){
            if(i<n){
                if(vowels.find(s[i])!=vowels.end())count++;
            }
            else{
                if(vowels.find(s[i])!=vowels.end())count--;                    
            }           
        }
        return count==0;
    }
};