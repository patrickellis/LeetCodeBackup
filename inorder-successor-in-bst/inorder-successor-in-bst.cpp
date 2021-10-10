/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode* cur = root, *prev = nullptr;
        vector<TreeNode*> inorder; 
        while(cur != nullptr)
        {
            if(cur -> left == nullptr){
                inorder.push_back(cur);
                cur = cur -> right;
            }    
            else{
                // find predecessor
                prev = cur -> left;
                while(prev->right != nullptr && prev->right != cur)
                    prev = prev->right;
                if(prev->right == nullptr){
                    prev->right = cur;
                    cur = cur->left;
                }
                else{
                    prev->right=nullptr;
                    inorder.push_back(cur);
                    cur = cur->right;
                }
            }
        }
        for(int node = 0; node < inorder.size()-1; ++node)
            if(inorder[node] == p)
                return inorder[++node];
        return nullptr;
    }
};