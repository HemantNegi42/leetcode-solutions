class Solution {
private:
    int firstocc(vector<int>& nums, int target, int n) {
        int s = 0;
        int e = n - 1;
        int mid = (s + e) / 2;
        int ans = -1;
        while (s <= e) {
            if (nums[mid] == target) {
                ans = mid;
                e = mid - 1;
            } else if (nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
            mid = (s + e) / 2;
        }
        return ans;
    }
    int lastocc(vector<int>& nums, int target, int n) {
        int s = 0;
        int e = n - 1;
        int ans = -1;
        int mid = (s + e) / 2;

        while (s <= e) {
            if (nums[mid] == target) {
                ans = mid;
                s = mid + 1;
            } else if (nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
            mid = (s + e) / 2;
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        int start = firstocc(nums, target, n);
        int end = lastocc(nums, target, n);
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};
