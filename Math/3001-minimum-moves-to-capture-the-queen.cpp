class Solution {
    bool bishopbetween(int a, int b, int c, int d, int e, int f) {
        if (a == c && c == e) {
            if ((b < d && d < f) || (b > d && d > f))
                return true;
        }

        if (b == d && d == f) {
            if ((a < c && c < e) || (a > c && c > e))
                return true;
        }
        return false;
    }
    bool rookbetween(int a, int b, int c, int d, int e, int f) {
        if (a + b == c + d && c + d == e + f) {
            if ((c > a && a > e) || (c < a && a < e))
                return true;
        }
        if (a - b == c - d && c - d == e - f) {
            if ((c > a && a > e) || (c < a && a < e))
                return true;
        }
        return false;
    }

public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        if ((c - d == e - f) || (c + d == e + f)) {
            if (!rookbetween(a, b, c, d, e, f))
                return 1;
        }
        if (a == e || b == f) {
            if (!bishopbetween(a, b, c, d, e, f))
                return 1;
        }
        return 2;
    }
};
