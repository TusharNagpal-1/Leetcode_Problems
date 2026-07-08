class Solution {
public:
    long long sumAndMultiply(int n) {
        long long int sum=0;
        long long int value=0;
        long long int x=1;
         while(n>0){
            long long int rem=n%10;
            sum=sum+rem;
            if(rem!=0){
                value=value+rem*x;
                x=x*10;
            }
            n/=10;
         }
        return 1L*sum*value;
    }
};