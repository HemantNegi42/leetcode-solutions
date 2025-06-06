class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1;
        int idx = nums1.size() - 1;
        while (i >= 00 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[idx--] = nums1[i--];
            } else {
                nums1[idx--] = nums2[j--];
            }
        }
        while (i >= 0) {
            nums1[idx--] = nums1[i--];
        }
        while (j >= 0) {
            nums1[idx--] = nums2[j--];
        }
    }
};
