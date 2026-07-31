class Solution {
public:
    int minimumPushes(string word) {
       vector<int> v(26,0);
       for(auto i:word){
        v[i-'a']++;
       }
       sort(v.begin(),v.end(),greater<int>());
       int ans=0;
       for(int i=0;i<26;i++){
        if(v[i]==0) break;
        int cost=i/8+1;
        ans+=v[i]*cost;
       }
       return ans;
    }
};