class Solution {
public:
   
    int gcdOfOddEvenSums(int n) {
        int oddsum=0,evensum=0;
        int x=1,y=2;
        for(int i=0;i<n;i++){
            oddsum=oddsum+x;
            evensum+=y;
            x=x+2;
            y=y+2;
        }
        return gcd(oddsum,evensum);
    }
};