class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> V{0,0};
        for(auto& i:students){
            V[i]++;
        }
        int k=0;
        while(k<sandwiches.size()){
            if(V[sandwiches[k]]-->0){
                k++;
            }    
            else break;
        }
        return sandwiches.size()-k;
    }
};