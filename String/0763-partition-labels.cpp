class Solution {
    int sol(string s, int start, int n) {
        int end = n - 1;
        int ch = s[start];
        while (ch != s[end]) {
            end--;
        }
        set<char> st;

        for (int i = start; i < end; i++) {
            st.insert(s[i]);
        }
        int ans = end;
        for (int i = end; i < n; i++) {
            if (st.find(s[i]) != st.end()) {
                ans = i;
                for (int j = end; j < ans; j++) {
                    st.insert(s[j]);
                    end = j;
                }
            }
        }
        return ans;
    }

public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int b = sol(s, i, n);
            a.push_back(b - i + 1);
            i = b;
        }
        return a;
    }
};
