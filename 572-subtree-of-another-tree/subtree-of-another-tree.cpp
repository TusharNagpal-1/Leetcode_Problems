class Solution {
public:
    bool check(TreeNode* root,TreeNode* subroot){
        if(root==nullptr && subroot==nullptr) return true;
        if(root==nullptr || subroot==nullptr) return false;
        if(subroot->val!=root->val) {
            return false;
        }
        return check(root->left,subroot->left) && check(root->right,subroot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr) return false;
        bool ans=check(root,subRoot) || isSubtree(root->left,subRoot) ||
        isSubtree(root->right,subRoot);
        return ans;
    }
};