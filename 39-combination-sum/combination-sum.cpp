class Solution {
public:
    void combsum(vector<vector<int>>& v, vector<int>& ans,
                 vector<int>& a, int x, int idx) {

        if (x == 0) {
            v.push_back(ans);
            return;
        }

        if (idx == a.size() || x < 0)
            return;

        // Include current element
        ans.push_back(a[idx]);
        combsum(v, ans, a, x - a[idx], idx);
        ans.pop_back();

        // Exclude current element
        combsum(v, ans, a, x, idx + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> ans;
        combsum(v, ans, candidates, target, 0);
        return v;
    }
};