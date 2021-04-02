class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        stack<TreeNode*> s1,s2;
        s1.push(root1); s2.push(root2);
        while(!s1.empty()&&!s2.empty()){
            if(dfs(s1)!=dfs(s2)) return false;
        }
        return(s1.empty()&&s2.empty());
    }
    
    int dfs(stack<TreeNode*> & s){
        while(true){
            TreeNode* Node = s.top(); s.pop();
            if(Node->right) s.push(Node->right);
            if(Node->left) s.push(Node->left);
            if(!Node->right && !Node->left) return Node->val;
        }
    }
               
};