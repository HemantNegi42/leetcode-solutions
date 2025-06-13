class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        if (p == 0)
            return 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int left = 0, right = nums[n - 1] - nums[0], mid = (left + right) / 2;
        while (left < right) {
            int pair = 0;
            mid = (left + right) / 2;
            for (int i = 1; i < n; i++) {
                int diff = nums[i] - nums[i - 1];
                if (diff <= mid) {
                    pair++;
                    i++;
                }
            }
            if (pair >= p)
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};
