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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) 
            return {};
        vector<vector<int>> result;
        queue<TreeNode*> Q;
        Q.push(root);
        int level = 0;
        while(!Q.empty()){
            int sz = Q.size();
            result.push_back({});
            for(int i = 0; i < sz; ++i){
                auto top = Q.front();
                Q.pop();
                result[level].push_back(top->val);
                if(top->left)
                    Q.push(top->left);
                if(top->right)
                    Q.push(top->right);
                
            }
            ++level;
        }
        return result;
    }
};