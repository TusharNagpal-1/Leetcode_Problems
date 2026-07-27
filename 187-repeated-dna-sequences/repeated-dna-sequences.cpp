class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size(),k=10;
        vector<string> ans;
        string s1="";
        if(n<10) return {};
        else{
            unordered_map<string,int> m;
            for(int i=0;i<10;i++){
                s1+=s[i];
            }
            m[s1]++;
            for(int i=10;i<n;i++){
                s1=s.substr(i-9,10);
                m[s1]++;
                if(m[s1]==2) ans.push_back(s1);
            }
        }
        return ans;
    }
};