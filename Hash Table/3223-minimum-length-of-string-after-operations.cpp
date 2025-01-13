class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        cout << n;
        vector<int> v(26);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            v[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            while (v[i] >= 3) {
                int rem = v[i] % 3;
                int q = v[i] / 3;
                v[i] = q + rem;
            }
            ans += v[i];
        }
        return ans;
    }
};
