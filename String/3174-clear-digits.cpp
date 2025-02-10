class Solution {
public:
    string clearDigits(string s) {
        int n = s.size();
        string ans = s;
        int start = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                start--;
            } else {
                ans[start] = s[i];
                start++;
            }
        }
        return ans.substr(0, start);
    }
};
