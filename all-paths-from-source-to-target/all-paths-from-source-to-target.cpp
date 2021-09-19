class Solution {
private:
    void dfs(vector<vector<int>>& g, vector<int>& path, vector<vector<int>> &res, int cur){
        path.push_back(cur);
        if(cur == g.size()-1)
            res.push_back(path);
        else for(auto it:g[cur]){
            dfs(g, path, res, it);
        }
        path.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int> path;
        dfs(graph, path, result, 0);
        return result;
    }
};