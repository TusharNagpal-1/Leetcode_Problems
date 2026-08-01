class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            int a = -1 * (nums[i]);
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1, k = n - 1;
            while (j < k) {
                vector<int> v;
                if (nums[j] + nums[k] == a) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++, k--;
                    while (j < n - 1 && nums[j] == nums[j - 1])
                        j++;
                    while (k >= 2 && nums[k] == nums[k + 1])
                        k--;
                } else if (nums[j] + nums[k] < a)
                    j++;
                else
                    k--;
            }
        }
        return ans;
    }
};