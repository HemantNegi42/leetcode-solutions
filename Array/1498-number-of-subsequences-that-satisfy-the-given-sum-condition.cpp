class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int m = 1000000007;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> power(n);
        power[0] = 1;
        for (int i = 1; i < n; i++) {
            power[i] = (power[i - 1] * 2) % m;
        }
        int s = 0;
        int e = n - 1;
        long long ans = 0;
        while (s <= e) {
            if (nums[s] + nums[e] > target)
                e--;
            else {
                ans = (ans + power[e - s]) % m;
                s++;
            }
        }
        return ans;
    }
};
