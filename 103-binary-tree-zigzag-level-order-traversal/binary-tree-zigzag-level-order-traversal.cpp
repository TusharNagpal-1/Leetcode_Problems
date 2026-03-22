class Solution {
public:
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1+ max(levels(root->left),levels(root->right));
    }
    void nthlevel(TreeNode* root,int curr,int level,vector<vector<int>>& v){
        if(level%2!=0){
        if(root==NULL) return;
        if(curr == level){
            v[level-1].push_back(root->val);
            return;
        }
        nthlevel(root->left,curr+1,level,v);
        nthlevel(root->right,curr+1,level,v);
        }
        else{
            if(root==NULL) return;
        if(curr == level){
            v[level-1].push_back(root->val);
            return;
        }
        nthlevel(root->right,curr+1,level,v);
        nthlevel(root->left,curr+1,level,v);
        }
    }
    void levelorder(TreeNode* root,vector<vector<int>>& ans){
        int n=levels(root);
        ans.resize(n);
        for(int i=1;i<=n;i++){
            nthlevel(root,1,i,ans);
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelorder(root,ans);
        return ans;
    }
};