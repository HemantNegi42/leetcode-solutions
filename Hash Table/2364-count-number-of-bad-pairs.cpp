class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        map<int, int> mp;
        long long count = 0;
        long long total = n * (n - 1) / 2;
        for (int i = 0; i < n; i++) {
            int diff = nums[i] - i;
            count += mp[diff];
            mp[diff]++;
        }
        return total - count;
    }
};
