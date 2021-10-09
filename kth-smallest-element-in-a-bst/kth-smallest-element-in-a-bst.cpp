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
    priority_queue<int> pq;
public:
    int kthSmallest(TreeNode* root, int k) {
        traverse(root);
        while(--k){
            pq.pop();
        }
        return abs(pq.top());
    }
    void traverse(TreeNode* root){
        if(root == nullptr)
            return;
        pq.push(-root->val);
        traverse(root->left);
        traverse(root->right);
    }
};