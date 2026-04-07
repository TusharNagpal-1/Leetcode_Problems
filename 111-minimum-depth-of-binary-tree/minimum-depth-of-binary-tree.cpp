class Solution {
public:
    int depth(TreeNode* root){
        if(root == NULL) return 0;

        if(root->left == NULL) 
            return 1 + depth(root->right);

        if(root->right == NULL) 
            return 1 + depth(root->left);

        return 1 + min(depth(root->left), depth(root->right));
    }

    int minDepth(TreeNode* root) {
        return depth(root);
    }
};