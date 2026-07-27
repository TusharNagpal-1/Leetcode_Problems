class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double a=0,maxavg=INT_MIN;
        int start=0,end=0;
        int n=nums.size();
        while(end<n){
             a+=nums[end];
            if(end-start+1 <k){
                end++;
            }
            else{
                maxavg=max(maxavg,a/k);
                a=(a-nums[start]);
                start++,end++;
            }
        }
        // for(int i=0;i<k;i++){
        //     a+=nums[i];
            
        // }
        // maxavg=max(maxavg,a/k);
        // for(int i=k;i<n;i++){
        //     a=(a-nums[i-k])+nums[i];
        //      maxavg=max(maxavg,a/k);
        // }
        return maxavg;
    }
};