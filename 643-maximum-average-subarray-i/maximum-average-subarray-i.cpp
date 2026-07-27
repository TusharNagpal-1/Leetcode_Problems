class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double a=0,maxavg=INT_MIN;
        int n=nums.size();
        for(int i=0;i<k;i++){
            a+=nums[i];
            
        }
        maxavg=max(maxavg,a/k);
        for(int i=k;i<n;i++){
            a=(a-nums[i-k])+nums[i];
             maxavg=max(maxavg,a/k);
        }
        return maxavg;
    }
};