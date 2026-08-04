class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> v;
        int i=0,j=i+1;
        while(j<n){
            int x=nums[j]-nums[i];
            if(x>1){
             for(int k=nums[i]+1;k<=nums[j]-1;k++) v.push_back(k);
            }
            i++;
            j++;
        }
        return v;
    }
};