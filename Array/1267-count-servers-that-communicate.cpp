class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<int> v(r);
        int ans = 0;
        for (int i = 0; i < r; i++) {
            int count = 0;
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 1)
                    count++;
            }
            if (count > 1) {
                v[i]++;
                ans += count;
            }
        }
        for (int i = 0; i < c; i++) {
            int count = 0;
            int x = 0;
            for (int j = 0; j < r; j++) {
                if (grid[j][i] == 1) {
                    count++;
                    if (v[j] != 0)
                        x++;
                }
            }
            if (count > 1) {
                ans += count - x;
            }
        }
        return ans;
    }
};
