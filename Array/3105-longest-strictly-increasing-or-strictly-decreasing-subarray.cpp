class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi = 1;
        int n = nums.size();
        if (n == 1)
            return 1;
        int count = 1;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i + 1])
                count++;
            else {
                maxi = max(maxi, count);
                count = 1;
            }
        }
        maxi = max(maxi, count);
        count = 1;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1])
                count++;
            else {
                maxi = max(maxi, count);
                count = 1;
            }
        }
        maxi = max(maxi, count);
        return maxi;
    }
};
