class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto& row:image){
            reverse(row.begin(), row.end());
            for(auto& i:row){
                i=i^1;
            }
        }
        return image;
    }
};