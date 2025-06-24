class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        set<int> st;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] == key) {
                int a = i - k;
                int b = k + i;
                if (a < 0)
                    a = 0;
                if (b >= n)
                    b = n - 1;
                while (a <= i) {
                    st.insert(a++);
                }
                while (i <= b) {
                    st.insert(b--);
                }
            }
        }
        for (int i : st) {
            ans.push_back(i);
        }
        return ans;
    }
};
