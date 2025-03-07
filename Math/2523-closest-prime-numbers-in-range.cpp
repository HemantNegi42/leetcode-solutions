class Solution {
    bool isPrime(int n) {
        if (n <= 1)
            return false;
        if (n == 2)
            return true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

public:
    vector<int> closestPrimes(int left, int right) {

        int a = 0;
        vector<int> ans(2, -1);
        for (int i = left; i <= right; i++) {
            if (isPrime(i)) {
                a = i;
                break;
            }
        }
        if (a == 0 || a == right)
            return ans;

        int min = right;
        int b = 0;
        for (int i = a + 1; i <= right; i++) {
            if (isPrime(i)) {
                b = i;
                if (b - a < min) {
                    ans[0] = a;
                    ans[1] = b;
                    min = b - a;
                }
                a = b;
            }
        }
        return ans;
    }
};
