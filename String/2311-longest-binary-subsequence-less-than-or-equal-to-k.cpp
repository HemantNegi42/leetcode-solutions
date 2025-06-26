class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n = s.size();
        int countZero = 0;
        double num = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0')
                countZero++;
        }
        int count = 0;
        int maxi = 0;
        int x = 0;
        for (int i = n - 1; i >= 0; i--) {
            count++;
            if (s[i] == '1') {
                double a = pow(2, x);
                num += a;
            } else
                countZero--;
            if (num > k)
                break;
            x++;
            maxi = max(count + countZero, maxi);
        }
        return maxi;
    }
};
