class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        int i1 = pow(10,6), i2=pow(10,6),diff=pow(10,5);
        for(int i=0;i<wordsDict.size();i++){
            if(wordsDict[i]==word1){
                diff = (abs(i-i2) < diff) ? i-i2 : diff;
                i1 = i;
            }
            if(wordsDict[i]==word2){
                diff = (abs(i-i1) < diff) ? i-i1 : diff;
                i2 = i;
            }
        }
        return diff;
    }
};