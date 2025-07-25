class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxi = nums[0];
        set<int> st;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            if (nums[i] < 0 || st.find(nums[i]) != st.end())
                continue;
            sum += nums[i];
            st.insert(nums[i]);
        }
        if (sum == 0)
            return maxi;
        return sum;
    }
};
