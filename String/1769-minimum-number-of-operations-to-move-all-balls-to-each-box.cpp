class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> store;
        for (int i = 0; i < n; i++) {
            if (boxes[i] == '1')
                store.push_back(i);
        }
        int m = store.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[i] += abs(i - store[j]);
            }
        }
        return ans;
    }
};
