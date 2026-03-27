class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k1) {
        vector<vector<int>> ans = mat;
        int row = mat.size();
        int col = mat[0].size();
        for (int i = 0; i < k1; i++) {
            for (int j = 0; j < row; j++) {
                if (j % 2 == 0) {
                     int temp = mat[j][0];
                    for (int k = 0; k < col; k++) {
                       
                        if (k == col - 1) {
                            mat[j][k] = temp;
                        }
                       else  mat[j][k] = mat[j][k + 1];
                    }
                } else {
                    int temp = mat[j][col-1];
                    for (int k = col - 1; k >=0; k--) {
                        
                        if (k == 0) {
                            mat[j][k] = temp;
                        }
                        else mat[j][k] = mat[j][k - 1];
                        
                    }
                }
            }
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (mat[i][j] != ans[i][j])
                    return false;
            }
        }
        return true;
    }
};