/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root){
        if(root==nullptr) return 0;
        int leftdepth = dfs(root->left);
        int rightdepth = dfs(root->right);
        if(leftdepth == -1 || rightdepth == -1){
            return -1;            
        }
        if(abs(leftdepth-rightdepth) > 1) return -1;
        return max(leftdepth, rightdepth) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(dfs(root)==-1)return false;
        return true;
    }
};