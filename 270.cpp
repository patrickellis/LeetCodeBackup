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
    int closestValue(TreeNode* root, double target) {
        double min = double(INT_MAX);
        int val = INT_MAX;
        while(root != nullptr && min != 0){
            if(abs(root->val - target) < min){
                min = abs(root->val - target);
                val = root->val;
            }
            if(root->val > target){
                root = root->left;
            }
            else{
                root = root->right;
            }
        }
        return val;
    }
};