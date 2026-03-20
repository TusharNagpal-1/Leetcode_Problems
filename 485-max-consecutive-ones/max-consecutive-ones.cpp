class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=0;
        int ans=0;
        if(nums.size()==1 && nums[0]==0) return 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) {
                curr++;
                ans=max(ans,curr);
        }
        else curr=0;
        }
        return ans;
    }
};