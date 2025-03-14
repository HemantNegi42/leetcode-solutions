class Solution {
    bool bin(vector<int>& candies, long long mid, long long k, int n) {
        for (int i = 0; i < n; i++) {
            int x = candies[i];
            k -= x / mid;
            if (k <= 0)
                return true;
        }
        return false;
    }

public:
    int maximumCandies(vector<int>& candies, long long k) {
        int mini = 1;
        int n = candies.size();
        int maxi = candies[0];
        for (int i = 0; i < n; i++) {
            maxi = max(candies[i], maxi);
        }
        int ans = 0;
        while (mini <= maxi) {
            long long mid = mini + (maxi - mini) / 2;
            if (bin(candies, mid, k, n)) {
                ans = mid;
                mini = mid + 1;
            } else {
                maxi = mid - 1;
            }
        }
        return ans;
    }
};
