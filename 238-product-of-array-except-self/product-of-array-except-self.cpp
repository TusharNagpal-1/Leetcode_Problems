class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        vector<int> pre(n,1);
        pre[0]=1;
        vector<int> suf(n,1);
        suf[n-1]=1;
        for(int i=1;i<n;i++){
           pre[i]=pre[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            int a=pre[i]*suf[i];
            v.push_back(a);
        }
        return v;
    }
};