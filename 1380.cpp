class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        unordered_set<int> S;
        for(int i=0;i<matrix.size();i++){
            int min=*min_element(matrix[i].begin(), matrix[i].end());
            S.insert(min);
        }
        vector<int> res;
        for(int i=0;i<matrix[0].size();i++){
            int max=INT_MIN;
            for(int j=0;j<matrix.size();j++){
                max=(matrix[j][i]>max)?matrix[j][i]:max;
            }
            if(S.find(max)!=S.end())res.push_back(max);            
        }
        return res;
        
    }
};