class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for (int i = low; i <= high; i++) {
            string str = to_string(i);
            int n = str.size();
            if (n % 2)
                continue;
            int s = 0;
            int e = n - 1;
            int ans = 0;
            while (s < e) {
                ans += str[s++];
                ans -= str[e--];
            }
            if (ans == 0)
                count++;
        }
        return count;
    }
};
