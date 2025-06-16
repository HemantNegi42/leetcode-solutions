class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = -1;
        int n = nums.size();
        int mini = nums[0];
        for (int i = 1; i < n; i++) {
            while (i < n && nums[i] > mini) {
                int diff = nums[i] - mini;
                ans = max(ans, diff);
                i++;
            }
            mini = nums[i];
        }
        return ans;
    }
};
