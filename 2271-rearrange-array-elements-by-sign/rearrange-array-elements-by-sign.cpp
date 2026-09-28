class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos;
        vector<int> neg;
        for(auto i:nums){
            if(i >=0) pos.push_back(i);
            else neg.push_back(i);
        }
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
              nums[i]=pos[x];
              x++;
            }
            else{
                nums[i]=neg[y];
                y++;
            }
        }
        return nums;
    }
};