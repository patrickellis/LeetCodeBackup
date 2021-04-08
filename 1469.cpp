
class Solution {
public:
    vector<int> getLonelyNodes(TreeNode* root) {
        stack<TreeNode*> s;
        s.push(root);
        vector<int> res;
        while(!s.empty()){
            dfs(s,res);
        }
        return res;
    }
    void dfs(stack<TreeNode*>& s,vector<int>& res){
        TreeNode* Node = s.top();s.pop();
        if(Node->left)s.push(Node->left);
        if(Node->right)s.push(Node->right);
        if(!Node->left && Node->right)res.push_back(Node->right->val);
        if(!Node->right && Node->left)res.push_back(Node->left->val);
    }
};