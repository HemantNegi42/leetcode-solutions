class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans = nums[0];
        int sum = nums[0];
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                sum += nums[i];
            } else {
                ans = max(ans, sum);
                sum = nums[i];
            }
            if (i == n - 1 && ans < sum) {
                ans = sum;
            }
        }
        return ans;
    }
};
