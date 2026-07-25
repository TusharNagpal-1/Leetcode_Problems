class Solution {
public:
    int maxProduct(int n) {
        vector<long long> v;
        while(n>0){
            int r=n%10;
            v.push_back(r);
            n/=10;
        }
        sort(v.begin(),v.end());
        long long int x=v[v.size()-2]*v[v.size()-1];
        return x;
    }
};