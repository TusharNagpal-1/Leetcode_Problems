class Solution {
public:
    int levels(TreeNode* root){
        if(root==nullptr) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    vector<int> levelOrder(TreeNode* root,int cur,int level,vector<int>& v){
        if(root==NULL) return {};
        if(cur==level) v.push_back(root->val);
        levelOrder(root->left,cur+1,level,v);
        levelOrder(root->right,cur+1,level,v);
        return v;
        // v.erase();
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n=levels(root);
        vector<vector<int>> v;
        for(int i=1;i<=n;i++){
            vector<int> v1;
            v.push_back(levelOrder(root,1,i,v1));
        }
        return v;
    }
};