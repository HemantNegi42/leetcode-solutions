class Solution {
public:
    int maxDifference(string s) {
        vector<int> v(26);
        int n = s.size();
        for (int i = 0; i < n; i++) {
            v[s[i] - 'a']++;
        }
        int odd = 0;
        int even = INT_MAX;
        for (int i = 0; i < 26; i++) {
            if (v[i] % 2 && odd < v[i])
                odd = v[i];
            if (v[i] != 0 && v[i] % 2 == 0 && even > v[i])
                even = v[i];
        }

        return odd - even;
    }
};
