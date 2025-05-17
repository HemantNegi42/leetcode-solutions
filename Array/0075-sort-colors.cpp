class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int c0 = 0;
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                c0++;
            else if (nums[i] == 1)
                c1++;
            else
                c2++;
        }
        int j = 0;
        while (c0) {
            nums[j] = 0;
            j++;
            c0--;
        }
        while (c1) {
            nums[j] = 1;
            j++;
            c1--;
        }
        while (c2) {
            nums[j] = 2;
            j++;
            c2--;
        }
    }
};
