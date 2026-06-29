class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int piviot=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                piviot=i;
                break;
            } 
        }
        if(piviot!=-1){
            int ele=nums[piviot],idx=-1;
            for(int i=n-1; i>=piviot;i--){
                if(nums[i]>ele) {
                    ele=nums[i];
                    idx=i;
                    break;
            }
            }
            int temp=nums[piviot];
            nums[piviot]=nums[idx];
            nums[idx]=temp;
            int a=piviot+1,b=n-1;
            while(a<b){
            int temp=nums[a];
            nums[a]=nums[b];
            nums[b]=temp;
            a++;
            b--;  
            }
        }
        else {
            reverse(nums.begin(),nums.end());
        }
    }
};