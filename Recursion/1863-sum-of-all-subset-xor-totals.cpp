class Solution {
    int sol(vector<int>& nums, int i, int n, int x) {
        if (i == n)
            return x;
        int b = sol(nums, i + 1, n, x ^ nums[i]);
        int a = sol(nums, i + 1, n, x);
        return a + b;
    }

public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        return sol(nums, 0, n, 0);
    }
};
