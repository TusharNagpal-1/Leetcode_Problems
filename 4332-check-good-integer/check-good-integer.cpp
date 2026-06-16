class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0,squaresum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            squaresum+=(rem*rem);
            n/=10;
        }
        int diff=squaresum-sum;
        if(diff>=50) return true;
        else return false;
    }
};