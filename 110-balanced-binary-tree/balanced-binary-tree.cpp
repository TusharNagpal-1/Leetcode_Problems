class Solution {
public:
    int height(TreeNode* root) {
        if (root == nullptr)
            return 0;

        return 1 + max(height(root->left), height(root->right));
    }

    bool check(TreeNode* root) {
        if (root == nullptr)
            return true;

        int lh = height(root->left);
        int rh = height(root->right);

        if (abs(lh - rh) > 1)
            return false;

        return check(root->left) && check(root->right);
    }

    bool isBalanced(TreeNode* root) {
        return check(root);
    }
};