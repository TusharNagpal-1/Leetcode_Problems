class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxval=INT_MIN,minval=INT_MAX;
        if(n==1) return 0;
        for(int i=0;i<n;i++){
             maxval=max(nums[i],maxval);
             if(i==n-1){
                int x=maxval-nums[n-1];
                if(x<=k) {
                    return i;
                }
             }
            for(int j=n-1;j>=i;j--){
                 minval=min(minval,nums[j]);
            }
            if(maxval-minval<= k) return i;
            minval=INT_MAX;
        }
        return -1;
    }
};