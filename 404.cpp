class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root, bool isLeft = false) {
        if(root==nullptr) return 0;
        if(!root->left && !root->right && isLeft) return root->val;
        return(sumOfLeftLeaves(root->left, true)+sumOfLeftLeaves(root->right, false));
    }
};