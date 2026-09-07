class Solution {
public:
    int helper(vector<int>& v,int n,vector<vector<int>>& dp,int i,int free){
      if(i==n){
        return 0;
      }
      if(dp[i][free]!=-1) return dp[i][free];
      if(free==1){
        return dp[i][free]=helper(v,n,dp,i+1,0);
      }
      int c1=v[i]+helper(v,n,dp,i+1,1);
      int c2=helper(v,n,dp,i+1,0);
      return dp[i][free]=max(c1,c2);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
       return helper(nums,n,dp,0,0);
    }
};