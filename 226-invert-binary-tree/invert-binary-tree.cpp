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
int sizetree(TreeNode* t){
    if(t==NULL) return 0;
    return 1+sizetree(t->left)+sizetree(t->right);
}
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr) return nullptr;
        int n=sizetree(root);
            TreeNode* temp=root->left;
            root->left=root->right;
            root->right=temp;
            invertTree(root->left);
            invertTree(root->right);
            // if(invertTree(root->left)==nullptr) root->right=nullptr;
            // if(invertTree(root->right)==nullptr) root->left=nullptr;
        return root;
    }
};