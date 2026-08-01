class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0) neg.push_back(nums[i]*nums[i]);
            else pos.push_back(nums[i]*nums[i]);
        }
        reverse(neg.begin(),neg.end());
        int x=neg.size(),y=pos.size();
        vector<int> ans(x+y);
        if(neg.size()==0){
            for(int i=0;i<pos.size();i++){
                // int x1=pos[i]*pos[i];
                ans[i]=pos[i];
            }
            return ans;
        }
        if(y==0){
            for(int i=0;i<x;i++){
                ans[i]=neg[i];
            }
            return ans;
        }
            int i=0,j=0,idx=0;
            while(i<x && j<y){
                if(neg[i]<=pos[j]){
                    ans[idx]=neg[i];
                    idx++,i++;
                }
                else{
                    ans[idx]=pos[j];
                    idx++,j++;
                }
            }
            while(j<y){
                ans[idx]=pos[j];
                idx++,j++;
            }
            while(i<x){
                ans[idx]=neg[i];
                idx++,i++;
            }
            return ans;
    }
};