class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        if (k > n)
            return false;
        if (k == n)
            return true;
        vector<int> v(26);
        for (int i = 0; i < n; i++) {
            v[s[i] - 'a']++;
        }
        int odd = 0;
        for (int i = 0; i < 26; i++) {
            if (v[i] % 2)
                odd++;
        }
        if (odd <= k)
            return true;
        return false;
    }
};
