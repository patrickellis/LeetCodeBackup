class Solution {
public:
    vector<int> postorder(Node* root) {
        if(!root) return {};
        stack<Node*> stk;
        stk.push(root);
        vector<int> res;            
        while(!stk.empty()){
            Node* temp=stk.top();stk.pop();
            for(auto& c:temp->children)stk.push(c);
            res.push_back(temp->val);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};