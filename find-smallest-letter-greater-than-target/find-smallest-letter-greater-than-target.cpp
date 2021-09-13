class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size()-1; 
        
        while(l < r){
            int mp = l + (r-l)/2;
            if(letters[mp] <= target){
                l = mp+1;
            }
            else{
                r = mp;
            }
        }
        return (letters[l] > target)?letters[l]:letters.front();
        
    }
};