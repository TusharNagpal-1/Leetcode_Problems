class Solution {
public:
    int helper(vector<int>& v,int n,vector<vector<int>>& dp,int i,int free){
        if(i==n) return 0;
        if(dp[i][free]!=-1) return dp[i][free];
        if(free == 0){
            return dp[i][free]=helper(v,n,dp,i+1,1);
        }
        int c1=v[i]+helper(v,n,dp,i+1,0);
        int c2=helper(v,n,dp,i+1,1);
        return dp[i][free]=max(c1,c2);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n);
        for(int i=0;i<n;i++){
            vector<int> t(2,-1);
            dp[i]=t;
        }
        return helper(nums,n,dp,0,1);
    }
};