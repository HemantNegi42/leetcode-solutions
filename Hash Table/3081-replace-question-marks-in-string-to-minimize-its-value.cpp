class Solution {
public:
    string minimizeStringValue(string s) {
        vector<int> ans(26);
        vector<int> index;
        int n = s.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '?')
                index.push_back(i);
            else
                ans[s[i] - 'a']++;
        }
        int a = ans[0];
        for (int i = 0; i < 26; i++) {
            if (a == 0)
                break;
            a = min(a, ans[i]);
        }
        n = index.size();
        string s1 = "";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                if (ans[j] <= a) {
                    char x = j + 97;
                    s1 += x;
                    ans[j]++;
                    break;
                } else if (j == 25) {
                    a++;
                    i--;
                }
            }
        }
        sort(s1.begin(), s1.end());
        for (int i = 0; i < n; i++) {
            s[index[i]] = s1[i];
        }
        return s;
    }
};
