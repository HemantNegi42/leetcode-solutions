class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> ans(n * n + 1);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x = grid[i][j];
                ans[x]++;
            }
        }
        vector<int> sol(2);
        int a = 0;
        int b = 0;
        for (int i = 1; i <= n * n; i++) {
            if (ans[i] > 1) {
                sol[0] = i;
                a = 1;
            }
            if (ans[i] == 0) {
                sol[1] = i;
                b = 1;
            }
            if (a && b)
                break;
        }
        return sol;
    }
};
