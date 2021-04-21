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
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        get_depth(root,d);
        return d;
    }
    int get_depth(TreeNode* root, int &d){
        if(root == nullptr) return 0;
        int ld = get_depth(root->left,d);
        int rd = get_depth(root->right, d);
        d = max(d, ld+rd);
        return max(rd,ld)+1;
    }
};