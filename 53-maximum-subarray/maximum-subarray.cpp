class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0];
        int currsum=0;
        for(int i=0;i<nums.size();i++){
            currsum=max(nums[i],currsum+nums[i]);
            maxsum=max(currsum,maxsum);
        }
        return maxsum;
    }
};