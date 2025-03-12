class Solution {
    int binSearch(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = (s + e) / 2;
        int ans = nums.size();
        while (s <= e) {
            if (nums[mid] < target)
                s = mid + 1;
            else {
                ans = mid;
                e = mid - 1;
            }
            mid = (s + e) / 2;
        }
        return ans;
    }

public:
    int maximumCount(vector<int>& nums) {
        int neg = binSearch(nums, 0);
        int pos = nums.size() - binSearch(nums, 1);
        return max(pos, neg);
    }
};
