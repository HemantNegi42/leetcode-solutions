class Solution {
    bool bin(vector<int>& ranks, long long time, int cars) {
        int n = ranks.size();

        for (int i = 0; i < n; i++) {
            long long x = time / ranks[i];
            long long res = sqrt(x);
            cars -= res;
            if (cars <= 0)
                return true;
        }
        return false;
    }

public:
    long long repairCars(vector<int>& ranks, int cars) {
        sort(ranks.begin(), ranks.end());
        long long end = (long long)ranks[0] * cars * cars;
        long long start = 0;
        long long ans = end;
        while (start <= end) {
            long long mid = start + (end - start) / 2;
            if (bin(ranks, mid, cars)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};
