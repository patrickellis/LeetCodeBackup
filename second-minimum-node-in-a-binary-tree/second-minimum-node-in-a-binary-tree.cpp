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
    int min, secondMin;
    bool foundSecond = false;
public:
    int findSecondMinimumValue(TreeNode* root) {
        min = root->val;
        traverse(root);
        return foundSecond?secondMin:-1;
    }
    void traverse(TreeNode* root){
        if(root==nullptr) 
            return;
        if(root->val > min){
            if(!foundSecond){
            foundSecond = true;
            secondMin = root->val;
            }
            else if(root->val < secondMin)
                secondMin = root->val;            
        }
        if(root->val < min){
            secondMin = min;
            min = root->val;
            foundSecond = true;
        }
        traverse(root->left);
        traverse(root->right);
    }
};