class Solution {
public:
    bool hasSameDigits(string s) {
        string ans = "";
        int n = s.size();
        while (n != 2) {
            for (int i = 0; i < n - 1; i++) {
                int a = s[i] - '0';
                int b = s[i + 1] - '0';
                ans += to_string((a + b) % 10);
            }
            n--;
            s = ans;
            ans = "";
        }
        if (s[0] == s[1])
            return true;
        return false;
    }
};
