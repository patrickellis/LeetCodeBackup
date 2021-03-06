
class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;
        int depth=0;
        for(auto& c:root->children){
            depth=max(depth, maxDepth(c));
        }
        return depth+1;
    }
};