class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int mini = nums[0];
        int count = 0;
        for (int i = 0; i < n; i++) {
            while (i < n && nums[i] - mini <= k)
                i++;
            count++;
            if (i < n - 1)
                mini = nums[i];
        }
        if (nums[n - 1] - mini > k)
            count++;
        return count;
    }
};
