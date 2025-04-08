class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        int i = n - 1;
        for (i = n - 1; i >= 0; i--) {
            if (st.find(nums[i]) != st.end())
                break;
            st.insert(nums[i]);
        }
        return (i + 3) / 3;
    }
};
