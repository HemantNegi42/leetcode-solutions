class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        map<int, int> ball;
        map<int, int> color;
        int n = queries.size();
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int x = queries[i][0];
            int y = queries[i][1];
            if (ball.find(x) != ball.end()) {
                int preColor = ball[x];
                color[preColor]--;
                if (color[preColor] == 0)
                    color.erase(preColor);
            }
            ball[x] = y;
            color[y]++;
            ans[i] = color.size();
        }
        return ans;
    }
};
