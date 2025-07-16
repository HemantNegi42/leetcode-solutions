class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int countEven = 0, countOdd = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0)
                countEven++;
            else
                countOdd++;
        }
        int maxi = max(countOdd, countEven);
        int evenSum = 0, oddSum = 0;
        for (int it : nums) {
            if (it % 2 == 0)
                evenSum = max(evenSum, oddSum + 1);
            else
                oddSum = max(oddSum, evenSum + 1);
        }
        maxi = max(maxi, max(evenSum, oddSum));
        return maxi;
    }
};
