class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int f=0,s=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=f){
                s=f;
                f=nums[i];
            }
            else if(nums[i]>s){
                s=nums[i];
            }
        }
        return (f-1)*(s-1);
    }
};