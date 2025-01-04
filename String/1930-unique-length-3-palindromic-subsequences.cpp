class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        int ans = 0;
        set<char> st;

        for (int i = 0; i < n; i++) {
            if (st.find(s[i]) != st.end())
                continue;
            st.insert(s[i]);
            int found = s.find_last_of(s[i]);
            int diff = found - i;
            if (diff > 1) {
                set<char> unique;
                for (int j = i + 1; j < found; j++) {
                    unique.insert(s[j]);
                }
                ans += unique.size();
            }
        }
        return ans;
    }
};
