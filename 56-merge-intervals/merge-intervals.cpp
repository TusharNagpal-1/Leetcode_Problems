class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        vector<vector<int>> ans;
        sort(a.begin(),a.end());
        int start=a[0][0];
        int end=a[0][1];
        int n=a.size();
        if(n==1) return a;
        for(int i=1;i<n;i++){
            int start1=a[i][0];
            int end1=a[i][1];
            if(end>=start1){
                end=max(end,end1);
                continue;
            }
           ans.push_back({start,end});
            start=start1;
            end=end1;
        }
        ans.push_back({start,end});
        return ans;
    }
};