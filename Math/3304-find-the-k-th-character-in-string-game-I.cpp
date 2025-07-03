class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        int n = s.size();
        while (n < k) {
            string a = "";
            for (int i = 0; i < n; i++) {
                if (s[i] != 'z')
                    a += s[i] + 1;
                else
                    a += 'a';
            }
            s = s + a;
            n = s.size();
        }
        return s[k - 1];
    }
};
