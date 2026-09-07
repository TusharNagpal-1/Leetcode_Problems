class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;

        sort(nums.begin(), nums.end());

        int len = 1;
        int curr = 1;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1]) {
                // duplicate, ignore
                continue;
            }

            if (nums[i] == nums[i - 1] + 1) {
                curr++;
            } 
            else {
                curr = 1;
            }

            len = max(len, curr);
        }

        return len;
    }
};