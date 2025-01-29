class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length();
        int n = needle.length();
        for (int i = 0; i < h; i++) {
            if (haystack[i] == needle[0]) {
                int t = i;
                for (int j = 0; j < n; j++) {
                    if (haystack[t] == needle[j]) {
                        t++;
                    }
                    if (t == n + i) {
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};
