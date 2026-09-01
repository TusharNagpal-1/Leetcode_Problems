class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j,int n,int m){
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        dfs(grid,i-1,j,n,m);//top
        dfs(grid,i,j+1,n,m);//right
        dfs(grid,i,j-1,n,m);//left
        dfs(grid,i+1,j,n,m);//down
    }
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j,row,col);
                }
            }
        }
        return count;
    }
};