
class Solution {
public:
    vector<int> preorder(Node* root) {
        if(root==nullptr)return {};
        stack<Node*> stk;
        stk.push(root);
        vector<int> res;
        while(!stk.empty()){
            Node* temp = stk.top();stk.pop();
            for(int i=(temp->children).size()-1;i>=0;i--){
                stk.push((temp->children)[i]);
            }
            res.push_back(temp->val);
        }
        return res;
    }
};