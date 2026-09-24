class Solution {
public:
    int helper(vector<int>& nums,vector<vector<int>> &dp,int i,int x){
        if(i==nums.size()){
            return 0;
        }
        if(dp[i][x]!=-1){
            return dp[i][x];
        }
        if(x==1){
            return dp[i][x]=helper(nums,dp,i+1,0);
        }
        int take=nums[i]+helper(nums,dp,i+1,1);
        int dont=helper(nums,dp,i+1,0);
        return dp[i][x]=max(take,dont);
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        return helper(nums,dp,0,0);
    }
};