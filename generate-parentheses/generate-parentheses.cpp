class Solution {
private:
    vector<string> solution;
public:
    
    void solve(int open, int closed, int n, string s){
        if(s.size() == n*2){
            solution.push_back(s);
            return;
        }
        if(open < n) 
            solve(open+1, closed, n, s+"(");
        if(closed < open)
            solve(open, closed+1, n, s+")");
    }
    vector<string> generateParenthesis(int n) {
        solve(0, 0, n, "");
        return solution;
    }
};