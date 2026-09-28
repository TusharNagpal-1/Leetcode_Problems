class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int ,int> m;
        for(auto i:nums){
            m[i]++;
        }
        int a=nums.size()/2;
        for(auto i:m){
            int value=i.first;
            int x=i.second;
            if(x>a) return value;
        }
        return -1;
    }
};