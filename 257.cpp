class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        getPaths(root, ans, "");
        return ans;
    }
    void getPaths(TreeNode* root, vector<string>&ans, string t){
        if(root==nullptr) return;
        if(!t.empty()){
            t += "->"+to_string(root->val);
        }
        else t = to_string(root->val);
        if(root->left||root->right){
            getPaths(root->left, ans, t);
            getPaths(root->right, ans, t);            
        }
        else{
            ans.push_back(t);
        }
    }
};