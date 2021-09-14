class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> graph(n);
        vector<bool> visited(n, false);
        // build the graph
        for(int i = 0; i < edges.size(); ++i){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        // BFS
        queue<int> q;
        q.push(start);
        visited[start] = true;
        while(!q.empty()){
            auto next = q.front();
            q.pop();
            if(next == end) 
                return true;
            else{
                for(auto e:graph[next]){
                    if(!visited[e]){
                        q.push(e);
                    }
                }
            }
            visited[next] = true;
        }
        return false;
    }
};