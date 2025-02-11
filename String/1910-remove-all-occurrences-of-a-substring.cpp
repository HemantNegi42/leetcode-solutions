class Solution {
public:
    string removeOccurrences(string s, string part) {
        int m = part.size();
        while (true) {
            int n = s.size();
            bool flag = false;
            for (int i = 0; i < n - m + 1; i++) {
                if (part == s.substr(i, m)) {
                    s.erase(i, m);
                    flag = true;
                    break;
                }
            }
            if (!flag)
                break;
        }
        return s;
    }
};
