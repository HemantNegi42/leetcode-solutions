class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        vector<pair<int, int>> p(n);
        for (int i = 0; i < n; i++) {
            p[i].first = nums[i];
            p[i].second = i;
        }
        sort(p.rbegin(), p.rend());
        sort(p.begin(), p.begin() + k,
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second < b.second;
             });
        for (int i = 0; i < k; i++) {
            ans.push_back(p[i].first);
        }
        return ans;
    }
};
