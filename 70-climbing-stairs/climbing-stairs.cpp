class Solution {
public:
    int climbStairs(int n) {
        int prev=1,prev2=2,next=0;
        if(n==1 || n==2) return n;
        for(int i=3;i<=n;i++){
            next=prev+prev2;
            prev=prev2;
            prev2=next;
        }
        return next;
    }
};