class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int alice=0,bob=0;
        int i=0,j=n-1;
        while(i<j && n>0){
            n=j-i+1;
            if(n%2==0){
            if(piles[i] >=piles[j]){
                alice+=piles[i];
                i++;
            } 
            else if(piles[i] < piles[j]) {
                alice+=piles[j];
                j--;
            }
            }
            else{
               if(piles[i] <=piles[j]){
                bob+=piles[i];
                i++;
            } 
            else if(piles[j] < piles[i]) {
                bob+=piles[j];
                j--;
            } 
            }
        }
        if(alice > bob) return true;
        return false;
    }
};