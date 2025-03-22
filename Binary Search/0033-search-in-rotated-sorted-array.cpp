class Solution {
private:
    int pivot(vector<int>& nums, int n) {
        int s = 0;
        int e = n - 1;
        int mid = (s + e) / 2;
        if (nums[0] <= nums[n - 1])
            return 0;
        while (s < e) {
            if (nums[0] > nums[mid]) {
                e = mid;
            } else
                s = mid + 1;
            mid = (s + e) / 2;
        }
        return mid;
    }
    int bin(vector<int>& nums, int n, int target, int s, int e) {
        int mid = (s + e) / 2;
        while (s <= e) {
            if (target == nums[mid])
                return mid;
            else if (target < nums[mid]) {
                e = mid - 1;
            } else
                s = mid + 1;
            mid = (s + e) / 2;
        }
        return -1;
    }

public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int start = pivot(nums, n);
        int ans = -1;
        cout << start;

        if (target < nums[0] || start == 0)
            ans = bin(nums, n, target, start, n - 1);
        else
            ans = bin(nums, n, target, 0, start - 1);
        return ans;
    }
};
