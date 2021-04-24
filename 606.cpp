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
    string res="";
    
    
public:
    
    string tree2str(TreeNode* t) {
        if(t)
            inorder(t);
        return res;
    }
    
    void inorder(TreeNode* t){
        res += to_string(t->val);
        if(t->left){
            res+="(";
            inorder(t->left);
            res += ")";
        }
        else if(t->right){
            res += "()";
        }
        if(t->right){
            res+="(";
            inorder(t->right);
            res+=")";
        }
    }
};