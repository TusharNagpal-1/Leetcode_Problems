class Solution {
public:
int levels(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void nthlevel(TreeNode* root,int curr,int level,vector<vector<int>> &v){
    if(root==NULL) return;
    if(curr==level) {
        v[level-1].push_back(root->val);
        return;
    }
    nthlevel(root->left,curr+1,level,v);
    nthlevel(root->right,curr+1,level,v);
}
void levelorder(TreeNode* root,vector<vector<int>>& v){
    int n=levels(root);
    v.resize(n);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i,v);
    }
}
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        levelorder(root,v);
        return v;
    }
};