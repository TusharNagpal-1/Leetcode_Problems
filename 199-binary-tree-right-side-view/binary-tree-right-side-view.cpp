class Solution {
public:
    void helper(TreeNode* root,int c,vector<int>& v){
        if(root==nullptr) return;
        if(c==v.size()) v.push_back(root->val);
        helper(root->right,c+1,v);
        helper(root->left,c+1,v);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        helper(root,0,v);
        return v;
    }
};