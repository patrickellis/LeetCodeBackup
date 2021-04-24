/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> M;
        for(auto & e:employees) M[e->id] = e;
        int sum=0;
        DFS(M,id,sum);
        return sum;
    }
    
    void DFS(unordered_map<int,Employee*> &M, int id, int &sum){
        sum += M[id]->importance;
        for(auto& e:M[id]->subordinates) DFS(M, e, sum);
    }
};