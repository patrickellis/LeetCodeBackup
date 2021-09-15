class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<int> adj[n];
        for(auto& e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        bool visited[n];
        memset(visited, false, sizeof(visited));
        // dfs
        stack<int> s;
        s.push(start);
        while(!s.empty()){            
            auto top = s.top();
            visited[top] = true;
            s.pop();
            if(top == end)
                return true;
            for(auto node : adj[top]){
                if(visited[node])
                    continue;
                s.push(node);
            }
        }
        
        return false;
    }
};