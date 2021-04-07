
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        stack<TreeNode*> s1; s1.push(root);
        int res=0;
        while(!s1.empty()){
            int node = dfs(s1,low,high);
            if(low <= node && node <= high) res+=node;
        }
        return res;
    }
    int dfs(stack<TreeNode*>& s,int low,int high){
        TreeNode* Node = s.top();s.pop();
        if(Node->left&&Node->val>low)s.push(Node->left);
        if(Node->right&&Node->val<high)s.push(Node->right);
        return Node->val;
    }
};