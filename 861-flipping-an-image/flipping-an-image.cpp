class Solution {
public:
    void reversematrix(vector<vector<int>>& v){
        int n=v.size();
        for(int i=0;i<n;i++){
                reverse(v[i].begin(),v[i].end());
        }
    }
    void invert(vector<vector<int>>& v){
        int n=v.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        reversematrix(image);
        invert(image);
        return image;
    }
};