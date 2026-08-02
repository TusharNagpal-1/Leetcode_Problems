class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int max_dif=INT_MAX;
        int result=0;
        int dif=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
            while(j<k){
                 int sum=nums[i]+nums[j]+nums[k];
            dif=abs(target-sum);
            if(dif<max_dif) {
                max_dif=dif;
                result=sum;
            }
                if(sum == target) {
                    j++,k--;
                }
                else if(sum< target){
                    j++;
                }
                else k--;
            }
        }
        return result;
    }
};