class Solution {
    int sol(string s, int x, char a, char b, string& s1) {
        stack<char> st;
        int n = s.size();
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == a && !st.empty() && st.top() == b) {
                ans += x;
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        while (!st.empty()) {
            s1 += st.top();
            st.pop();
        }
        reverse(s1.begin(), s1.end());
        return ans;
    }

public:
    int maximumGain(string s, int x, int y) {
        stack<char> st;
        long long ans = 0;
        string s1 = "";
        if (x > y) {
            ans += sol(s, x, 'b', 'a', s1);
            ans += sol(s1, y, 'a', 'b', s1);
        } else {
            ans += sol(s, y, 'a', 'b', s1);
            ans += sol(s1, x, 'b', 'a', s1);
        }
        return ans;
    }
};
