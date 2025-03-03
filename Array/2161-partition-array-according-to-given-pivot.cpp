class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans(n);
        int count = 0, less = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == pivot)
                count++;
            else if (nums[i] < pivot)
                less++;
        }
        int index = 0;
        int high = less + count;

        for (int i = less; i < less + count; i++) {
            ans[i] = pivot;
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] < pivot) {
                ans[index++] = nums[i];
            } else if (nums[i] > pivot) {
                ans[high++] = nums[i];
            }
        }
        return ans;
    }
};
