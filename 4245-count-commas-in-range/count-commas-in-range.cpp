class Solution {
public:
    int countCommas(int n) {
        string s=to_string(n);
        int x=s.size();
        if(x<4) return 0;
        if(x==4) return n-1000+1;
        if(x==5) return 9000+(n-10000+1);
        if(x==6) return 99000+(n-100000+1);
        return -1;
    }
};