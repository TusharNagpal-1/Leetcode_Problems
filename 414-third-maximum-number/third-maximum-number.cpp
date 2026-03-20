class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long firstmax = LONG_MIN;
        long secmax = LONG_MIN;
        long thirdmax = LONG_MIN;

        for(int x : nums){
            if(x == firstmax || x == secmax || x == thirdmax)
                continue;

            if(x > firstmax){
                thirdmax = secmax;
                secmax = firstmax;
                firstmax = x;
            }
            else if(x > secmax){
                thirdmax = secmax;
                secmax = x;
            }
            else if(x > thirdmax){
                thirdmax = x;
            }
        }

        return thirdmax == LONG_MIN ? firstmax : thirdmax;
    }
};