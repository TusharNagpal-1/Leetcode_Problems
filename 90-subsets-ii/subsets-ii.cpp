class Solution {
public:
    void allsubset(vector<vector<int>> &v,vector<int>& ans,vector<int> &nums,int i){
        if(i==nums.size()){
            v.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        allsubset(v,ans,nums,i+1);
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        ans.pop_back();
        allsubset(v,ans,nums,idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        vector<int> ans;
        allsubset(v,ans,nums,0);
        return v;
    }
};