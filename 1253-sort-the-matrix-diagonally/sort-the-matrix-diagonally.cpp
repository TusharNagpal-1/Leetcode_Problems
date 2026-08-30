class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        unordered_map<int,vector<int>> m;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                m[i-j].push_back(mat[i][j]);
            }
        }
        for(auto &i:m){
            sort(i.second.begin(),i.second.end());
        }
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=0;j--){
                mat[i][j]=m[i-j].back();
                m[i-j].pop_back();
            }
        }
        return mat;
    }
};