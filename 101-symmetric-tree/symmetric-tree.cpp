class Solution {
public:
    bool helper(TreeNode* l,TreeNode* r){
    if(l==NULL && r==NULL) return true;
     if(l==NULL || r==NULL) return false;
     if(l->val == r->val) {
        return (helper(l->left,r->right) && helper(l->right,r->left));
    }
    return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        if(helper(root->left ,root->right)) return true;
        return false;
    }
};