class Solution {
public:
    bool fun(vector<int>& h,vector<int>& l){
        for(int i=0;i<128;i++){
            if(h[i]<l[i]) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n<m) return "";
        int low=0,high=0,res=INT_MAX,start=-1;
        vector<int> need(128,0);
        vector<int> have(128,0);
        for(int i=0;i<m;i++){
            have[t[i]]++;
        }
        while(high<n){
            need[s[high]]++;
            while(fun(need,have)){
                int len=high-low+1;
                if(res>len){
                    res=len;
                    start=low;
                }
                need[s[low]]--;
                low++;
            }
            high++;
        }
        return start==-1?"":s.substr(start,res);
    }
};