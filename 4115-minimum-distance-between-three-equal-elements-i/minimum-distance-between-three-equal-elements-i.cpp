class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return -1;
        map<int, vector<int>> m;
        for(int i = 0; i < n; i++){
            m[nums[i]].push_back(i);
        }
        int ans = INT_MAX;
        for(auto &p : m){
            vector<int> &v = p.second;
            if(v.size() >= 3){
                for(int i = 0; i + 2 < v.size(); i++){
                    int x = v[i];
                    int y = v[i+1];
                    int z = v[i+2];
                    int dist = abs(x - y) + abs(y - z) + abs(z - x);
                    ans = min(ans, dist);
                }
            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};