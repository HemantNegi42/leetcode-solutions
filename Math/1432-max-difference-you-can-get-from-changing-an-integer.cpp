class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);
        string a, b;
        int n = s.size();
        int i = 0;
        while (i < n && s[i] == '9')
            i++;
        char x = s[i];
        for (int i = 0; i < n; i++) {
            if (s[i] == x)
                a += '9';
            else
                a += s[i];
        }
        i = 0;
        char bx;
        if (s[i] == '1') {
            while (s[i] == '0' || s[i] == '1') {
                i++;
            }
            bx = '0';
        } else {
            bx = '1';
        }
        x = s[i];
        for (int i = 0; i < n; i++) {
            if (s[i] == x)
                b += bx;
            else
                b += s[i];
        }
        return stoi(a) - stoi(b);
    }
};
