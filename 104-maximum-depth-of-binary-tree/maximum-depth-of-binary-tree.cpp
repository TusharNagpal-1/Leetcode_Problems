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
int maxdepth(TreeNode* root){
    if(!root) return 0;
    return max(1+maxdepth(root->left),1+maxdepth(root->right));
}
    int maxDepth(TreeNode* root) {
        int n=maxdepth(root);
        return n;
    }
};