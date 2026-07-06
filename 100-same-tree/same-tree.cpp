class Solution {
public:
    int height(TreeNode* root){
        if(root==nullptr) return 0;
        return max(1+height(root->left),1+height(root->right));
    }
    bool check(TreeNode* p,TreeNode* q){
        if(p==nullptr && q==nullptr) return true;
        if(p==nullptr || q==nullptr) return false;
        if(p->val != q->val) return false;
        return ((check(p->left, q->left)) && (check(p->right, q->right))) ;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int x=height(p);
        int y=height(q);
        bool ans=false;
        if(x!=y) return false;
        else{
             ans=check(p,q);
        }
        return ans;
    }
};