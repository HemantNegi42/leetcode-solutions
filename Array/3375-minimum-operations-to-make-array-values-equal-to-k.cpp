class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        set<int> st;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (k > nums[i])
                return -1;
            if (k < nums[i] && st.find(nums[i]) == st.end()) {
                st.insert(nums[i]);
                count++;
            }
        }
        return count;
    }
};
