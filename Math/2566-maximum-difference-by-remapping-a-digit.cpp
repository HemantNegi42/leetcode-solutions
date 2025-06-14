class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        int n = s.size();
        string maxi = "9";
        string mini = "0";
        int i = 0;
        while (s[i] == '9') {
            i++;
        }
        char x = s[i];
        for (i = 1; i < n; i++) {
            if (s[i] == s[0]) {
                mini += "0";
            } else {
                mini += s[i];
            }
            if (s[i] == x) {
                maxi += '9';
            } else {
                maxi += s[i];
            }
        }
        return stoi(maxi) - stoi(mini);
    }
};
