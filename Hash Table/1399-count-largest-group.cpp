class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> v(37);
        for (int i = 1; i <= n; i++) {
            int sum = 0;
            int x = i;
            while (x) {
                int k = x % 10;
                sum += k;
                x = x / 10;
            }
            v[sum]++;
        }
        int count = 0;
        int maxi = -1;
        for (int i = 1; i <= 36; i++) {
            if (v[i] > maxi) {
                count = 1;
                maxi = v[i];
            } else if (v[i] == maxi)
                count++;
        }
        return count;
    }
};
