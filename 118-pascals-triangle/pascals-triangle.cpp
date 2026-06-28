class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> v1;
      for(int i=0;i<numRows;i++){
        vector<int> v(i+1);
        for(int j=0;j<=i;j++){
            if(j==i || j==0) v[j]=1;
            else v[j]=v1[i-1][j-1]+v1[i-1][j];
        }
        v1.push_back(v);
      }  
      return v1;
    }
};