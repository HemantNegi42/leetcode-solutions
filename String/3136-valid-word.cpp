class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        if (n < 3)
            return false;
        int vcount = 0;
        int cons = 0;
        for (int i = 0; i < n; i++) {
            char ch = word[i];
            if (ch == '@' || ch == '#' || ch == '$')
                return false;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vcount++;
            else if (ch >= '0' && ch <= '9')
                continue;
            else
                cons++;
        }
        if (vcount > 0 && cons > 0)
            return true;
        return false;
    }
};
