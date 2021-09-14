class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        for(auto n:edges.front())
            if(find(edges.back().begin(), edges.back().end(),n) != edges.back().end())
                return n;
        return -1;
    }
};