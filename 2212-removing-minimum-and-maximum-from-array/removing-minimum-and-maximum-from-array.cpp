class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minele=INT_MAX;
        int maxele=INT_MIN;
        int minindex=-1,maxindex=-1;
        if(nums.size()==1) return 1;
        for(int i=0;i<n;i++){
            if(nums[i]<minele){
                minele=nums[i];
                minindex=i;
            }
            if(nums[i]>maxele){
                maxele=nums[i];
                maxindex=i;
            }
        }
        int x=max(minindex,maxindex)+1;
        int y=n-min(minindex,maxindex);
        int z=min(minindex,maxindex)+1+n-max(minindex,maxindex);
        return min(min(x,y),z);
    }
};