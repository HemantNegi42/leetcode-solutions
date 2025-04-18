class Solution {
    string sol(string s) {
        int n = s.size();
        string ans = "";
        if (n == 1)
            return "11";
        for (int i = 0; i < n - 1; i++) {
            int count = 1;
            while (i < n && s[i] == s[i + 1]) {
                count++;
                i++;
            }
            string s1 = to_string(count);
            ans += s1 + s[i];
        }
        if (s[n - 1] != s[n - 2]) {
            ans += "1";
            ans += s[n - 1];
        }
        return ans;
    }

public:
    string countAndSay(int n) {
        string s = "1";
        while (n > 1) {
            s = sol(s);
            n--;
        }
        return s;
    }
};
