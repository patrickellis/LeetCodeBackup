class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> graph[n+1];
        for(auto &t:trust){
            cout << t[0] << " trusts " << t[1] << '\n';
            graph[t[0]].push_back(t[1]);
        }
        for(int i = 1; i <= n; ++i){    
            bool flag = true;
            if(graph[i].empty()){
                cout << "empty i : " << i << "\n";
                for(int j = 1; j <= n; ++j){
                    if(j == i) 
                        continue;
                    if(find(graph[j].begin(), graph[j].end(),i)==graph[j].end())
                        flag = false;
                }
                if(flag) return i;
            }    
        }
        return -1;
    }
};