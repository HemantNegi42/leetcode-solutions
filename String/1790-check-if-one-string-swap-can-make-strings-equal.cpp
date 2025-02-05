class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.length();
        if (s1 == s2)
            return true;
        int j = -1;
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                if (j != -1) {
                    swap(s1[i], s1[j]);
                    if (s1 == s2) return true;
                    break;
                }
                j = i;
            }
        }
        return false;
    }
};
