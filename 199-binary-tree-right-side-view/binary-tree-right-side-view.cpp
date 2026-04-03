class Solution {
public:
    int level(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(level(root->left), level(root->right));
    }
    void nthlevel(TreeNode* root, int level, int curr, vector<int>& ans) {
        if (root == NULL)
            return;
        if (curr == level) {
            ans[curr] = root->val;
            return;
        }
        nthlevel(root->left, level, curr + 1, ans);
        nthlevel(root->right, level, curr + 1, ans);
    }
    void olevel(TreeNode* root, vector<int>& ans) {
        int n = ans.size();
        for (int i = 0; i < n; i++) {
            nthlevel(root, i, 0, ans);
        }
    }

    vector<int> rightSideView(TreeNode* root) {
        int n = level(root);
        vector<int> ans(n, 0);
        olevel(root, ans);
        return ans;
    }
};