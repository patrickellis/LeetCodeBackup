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
    TreeNode* prev = nullptr;
    int minVal = INT_MAX;
public:
    int minDiffInBST(TreeNode* root) {
        if(root==nullptr) return 0;
        minDiffInBST(root->left);
        if(prev != nullptr){
            minVal = min(abs(root->val - prev->val), minVal);
        }
            
        prev = root;
        minDiffInBST(root->right);
        return minVal;
    }
};