class Solution {
public:
      bool helper(vector<int>& arr, int sum, int i, int n,
                  vector<vector<int>>& v) {

          if (sum == 0)
              return true;

          if (i == n)
              return false;

          if (v[i][sum] != -1)
              return v[i][sum];

          if (arr[i] > sum) {
              return v[i][sum] = helper(arr, sum, i + 1, n, v);
          }

          bool take = helper(arr, sum - arr[i], i + 1, n, v);
          bool skip = helper(arr, sum, i + 1, n, v);

          return v[i][sum] = take || skip;
      }

      bool isSubsetSum(vector<int>& arr, int sum) {
          int n = arr.size();

          vector<vector<int>> v(n, vector<int>(sum + 1, -1));

          return helper(arr, sum, 0, n, v);
      }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        return isSubsetSum(nums,sum/2);
    }
};