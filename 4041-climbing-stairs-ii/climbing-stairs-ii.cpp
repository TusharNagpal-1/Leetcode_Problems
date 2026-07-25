class Solution {
public:
    int solve(int i, int n, vector<int>& costs, vector<int>& dp) {
        if (i == n)
            return 0;

        if (dp[i] != -1)
            return dp[i];

        int ans = INT_MAX;

        for (int j = i + 1; j <= min(i + 3, n); j++) {
            ans = min(ans,
                      costs[j] + (j - i) * (j - i) +
                      solve(j, n, costs, dp));
        }

        return dp[i] = ans;
    }

    int climbStairs(int n, vector<int>& costs) {
        costs.insert(costs.begin(), 0);   // make it 1-indexed
        vector<int> dp(n + 1, -1);

        return solve(0, n, costs, dp);
    }
};