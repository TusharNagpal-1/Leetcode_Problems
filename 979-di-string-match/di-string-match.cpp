class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int x = 0, y = n;
        vector<int> v(n + 1);
        for (int i = 0; i < n; i++) {
            if (s[i] == 'I') {
                v[i] = x;
                x++;
            } else {
                v[i] = y;
                y--;
            }
        }
        v[n] = x;
        return v;
    }
};