class Solution {
public:
    int climb(int n,vector<int> &v){
        if(n==1 || n==2) return n;
        if(v[n]!=-1) return v[n];
        return v[n]=climb(n-1,v)+climb(n-2,v);
    }
    int climbStairs(int n) {
        vector<int> v(n+1,-1);
        return climb(n,v);
    }
};