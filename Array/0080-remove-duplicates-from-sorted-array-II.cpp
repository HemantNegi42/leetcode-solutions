class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2)
            return n;
        int j = 0;
        int element = nums[0];
        int i = 0;
        while (i < n) {
            if (i < n - 1 && nums[i] == nums[i + 1]) {
                nums[j] = nums[i];
                j++;
                nums[j] = nums[i];
                element = nums[i];
                while (i < n && nums[i] == element)
                    i++;
            } else {
                nums[j] = nums[i];
                i++;
            }
            j++;
        }
        return j;
    }
};
