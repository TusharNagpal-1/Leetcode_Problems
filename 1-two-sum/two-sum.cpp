class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> m;
        m[nums[0]]=0;
        int i=1;
        while(m.size()!=0 && i<n){
            int x=target-nums[i];
            if(m.find(x)!=m.end()) return {i,m[x]};
            else m[nums[i]]=i;
            i++;
        }
        return {-1,-1};
    }
};