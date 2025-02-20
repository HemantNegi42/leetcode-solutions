class Solution {
    void sol(vector<string>& v, int n, string s) {
        if (n == 0) {
            v.push_back(s);
            return;
        }
        string a = s + '0';
        string b = s + '1';
        sol(v, n - 1, a);
        sol(v, n - 1, b);
    }

public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string s = "";
        vector<string> v;
        sol(v, n, s);
        set<string> st;
        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }
        for (int i = 0; i < v.size(); i++) {
            if (st.find(v[i]) == st.end())
                return v[i];
        }
        return s;
    }
};
