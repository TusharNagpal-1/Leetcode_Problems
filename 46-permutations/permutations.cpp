class Solution {
public:
    void permu(vector<vector<int>> &v,vector<int> &nums,int i){
        if(i==nums.size()){
            v.push_back(nums);
            return;
        }
        for(int idx=i;idx<nums.size();idx++){
            swap(nums[i],nums[idx]);
            permu(v,nums,i+1);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        permu(v,nums,0);
        return v;
    }
};