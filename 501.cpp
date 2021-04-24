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
private:
    int curCnt = 0;
    int maxCnt = 0;
    TreeNode* prev = nullptr;
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        inorder(root, res);
        return res;
    }
    void inorder(TreeNode* root, vector<int> &res){
        if(root==nullptr) return;
        inorder(root->left, res);
        if(prev != nullptr && root->val == prev->val){
            curCnt++;            
        }
        else{
            curCnt = 1;    
        }
        if(curCnt > maxCnt){
            maxCnt = curCnt;
            res.clear();
            res.push_back(root->val);
        }
        else if(curCnt == maxCnt){
            res.push_back(root->val);
        }
        prev = root;
        inorder(root->right, res);
    }
};