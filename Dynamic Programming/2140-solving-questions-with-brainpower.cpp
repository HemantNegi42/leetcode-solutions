class Solution {
    long long sol(vector<vector<int>>& questions, int i, int n, vector<long long>& dp) {
        if (i >= n) 
            return 0;
        if (dp[i] != -1)
            return dp[i];
        long long a = sol(questions, i + 1, n, dp);
        long long b = questions[i][0] + sol(questions, i + questions[i][1] + 1, n, dp);
        dp[i] = max(a, b);
        return dp[i];
    }

public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n + 1, -1);
        return sol(questions, 0, n, dp);
    }
};
