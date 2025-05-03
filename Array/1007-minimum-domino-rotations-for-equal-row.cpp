class Solution {
    int sol(vector<int>& tops, vector<int>& bottoms, int n, int x) {
        int c1 = 0;
        int c2 = 0;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (tops[i] == x && bottoms[i] == x)
                continue;
            if (tops[i] == x) {
                c1++;
            } else if (bottoms[i] == x) {
                c2++;
            } else {
                flag = false;
                break;
            }
        }
        if (flag) {
            return min(c1, c2);
        }
        return -1;
    }

public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        int a = sol(tops, bottoms, n, tops[0]);
        int b = sol(tops, bottoms, n, bottoms[0]);

        if (a == -1 && b == -1)
            return -1;
        int ans = -1;
        if (b == -1)
            ans = a;
        else if (a == -1)
            ans = b;
        else
            ans = min(a, b);
        return ans;
    }
};
