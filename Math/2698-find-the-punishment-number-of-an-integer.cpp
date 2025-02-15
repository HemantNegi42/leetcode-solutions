class Solution {
    bool sol(int n, int i) {
        if (n < i || i < 0)
            return false;
        if (n == i)
            return true;
        return sol(n / 10, i - (n % 10)) || sol(n / 100, i - (n % 100)) || sol(n / 1000, i - (n % 1000));
    }

public:
    int punishmentNumber(int n) {
        int count = 1;
        for (int i = 2; i <= n; i++) {
            if (sol(i * i, i))
                count += i * i;
        }
        return count;
    }
};
