class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int a = nums[i];
            while (a > 0 && a <= n && nums[a - 1] != a && nums[i] != i + 1) {
                swap(nums[i], nums[a - 1]);
                a = nums[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1)
                return i + 1;
        }
        return n + 1;
    }
};
