class Solution {
    bool sol(int n, int i, int sum) {

        if (sum == n)
            return true;
        if (sum > n || n < pow(3, i))
            return false;
        bool a = sol(n, i + 1, sum);
        sum += pow(3, i);
        bool b = sol(n, i + 1, sum);
        return a || b;
    }

public:
    bool checkPowersOfThree(int n) {
        int sum = 0;
        int i = 0;
        return sol(n, i, sum);
    }
};
