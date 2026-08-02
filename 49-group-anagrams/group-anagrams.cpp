class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<vector<string>> ans;
        int n=s.size();
        unordered_map<string,vector<string> > m;
        for(int i=0;i<n;i++){
            string z=s[i];
            sort(z.begin(),z.end());
            m[z].push_back(s[i]);
        }
        for(auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }
};