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
    int findSecondMinimumValue(TreeNode* root) {
        set<int> S;
        dfs(root, S);
        if(S.size()<2)return -1;
        return *(++S.begin());
        
    }
    void dfs(TreeNode* root, set<int> &S){
        if(root == nullptr) return;
        else S.insert(root->val);
        dfs(root->left,S); dfs(root->right,S);
    }
};