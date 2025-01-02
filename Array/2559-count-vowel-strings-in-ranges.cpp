class Solution {

    bool check(string s, int n) {
        if ((s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u') &&
            (s[n - 1] == 'a' || s[n - 1] == 'e' || s[n - 1] == 'i' || s[n - 1] == 'o' || s[n - 1] == 'u'))
            return true;

        return false;
    }

public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefix(n + 1);
        int x = 0;
        for (int i = 0; i < n; i++) {
            prefix[i] = x;
            if (check(words[i], words[i].length())) {
                x++;
            }
        }
        prefix[n] = x;
        int m = queries.size();
        vector<int> ans(m);
        for (int i = 0; i < m; i++) {
            ans[i] = prefix[queries[i][1] + 1] - prefix[queries[i][0]];
        }
        return ans;
    }
};
