class Solution {
private:
    void dfs(vector<vector<int>>& graph, vector<vector<int>> &result, vector<int> &path, int cur){
        path.push_back(cur);
        if(cur == graph.size()-1)
            result.push_back(path);
        else{
            for(auto p : graph[cur])
                dfs(graph, result,path,p);
        }
        path.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int> path;
        dfs(graph, result, path, 0);
        return result;        
    }
};