class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        int v = INT_MIN;
        int value;
        if (n == 1)
            return 1;
        for (auto i : m) {
            int x = i.second;
            if (x > v) {
                v = x;
            }
        }
        vector<int> v1;
        for (auto i : m) {
            int c = i.second;
            if (c == v)
                v1.push_back(i.first);
        }
        int highvalue, lowervalue;
        int value1=INT_MAX;
        for (int i = 0; i < v1.size(); i++) {
            for (int j = 0; i < n; j++) {
                if (nums[j] == v1[i]) {
                    lowervalue = j;
                    break;
                }
            }
             for (int j = n - 1; j >= 0; j--) {
                    if (nums[j] == v1[i]) {
                        highvalue = j;
                        break;
                    }
                }
                 int ans = highvalue - lowervalue + 1;
                 value1=min(value1,ans);
        }
            return value1;
        }
    };