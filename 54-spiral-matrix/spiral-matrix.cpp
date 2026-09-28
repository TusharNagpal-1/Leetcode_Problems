class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size()-1;
        int col=matrix[0].size()-1;
        int minr=0,maxr=row;
        int minc=0,maxc=col;
        vector<int> v;
        while(minr<=maxr && minc<=maxc){
            for(int i=minc;i<=maxc;i++){
                v.push_back(matrix[minr][i]);
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            for(int i=minr;i<=maxr;i++){
                 v.push_back(matrix[i][maxc]);
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            for(int i=maxc;i>=minc;i--){
                 v.push_back(matrix[maxr][i]);
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            for(int i=maxr;i>=minr;i--){
                 v.push_back(matrix[i][minc]);
            }
            minc++;
        }
        return v;
    }
};