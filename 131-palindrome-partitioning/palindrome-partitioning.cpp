class Solution {
public:
    bool ispalindrome(string s){
        string a=s;
        reverse(a.begin(),a.end());
        return s==a;
    }
    void partition(vector<vector<string>> &ans,vector<string>& v,string s){
        if(s.size()==0){
            ans.push_back(v);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);
            if(ispalindrome(part)){
                v.push_back(part);
                partition(ans,v,s.substr(i+1));
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
      vector<vector<string>> ans;
      vector<string> v;
      partition(ans,v,s);  
      return ans;
    }
};