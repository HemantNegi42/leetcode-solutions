class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int zero1 = 0;
        int zero2 = 0;
        long long sum1 = 0;
        long long sum2 = 0;
        for (int i = 0; i < n; i++) {
            sum1 += nums1[i];
            if (nums1[i] == 0)
                zero1++;
        }
        n = nums2.size();
        for (int i = 0; i < n; i++) {
            sum2 += nums2[i];
            if (nums2[i] == 0)
                zero2++;
        }
        if (zero1 == 0 || zero2 == 0) {
            if ((zero2 == 0) && (sum1 + zero1 > sum2))
                return -1;
            else if ((zero1 == 0) && (sum1 < sum2 + zero2))
                return -1;
            else if ((zero1 == zero2) && (sum1 != sum2))
                return -1;
        }
        return max(sum1 + zero1, sum2 + zero2);
    }
};
