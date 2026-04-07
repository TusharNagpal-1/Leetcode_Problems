class Solution {
public:
    int level(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(level(root->left), level(root->right));
    }
    int maxDepth(TreeNode* root) {
        int ans = level(root);
        return ans;
    }
};