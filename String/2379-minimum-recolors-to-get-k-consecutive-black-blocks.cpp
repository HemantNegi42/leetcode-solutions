class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int b = 0, w = 0;
        int n = blocks.size();
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W')
                w++;
            else
                b++;
        }
        if (w == 0)
            return 0;
        int mini = w;
        for (int i = k; i < n; i++) {
            if (blocks[i - k] == 'W')
                w--;
            else
                b--;
            if (blocks[i] == 'W')
                w++;
            else
                b++;
            if (w == 0)
                return 0;
            mini = min(mini, w);
        }
        return mini;
    }
};
