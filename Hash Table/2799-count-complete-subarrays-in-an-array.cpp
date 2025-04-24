class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }
        int k = st.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            set<int> s;
            for (int j = i; j < n; j++) {
                s.insert(nums[j]);
                if (s.size() == k) {
                    count += n - j;
                    break;
                }
            }
        }
        return count;
    }
};
